#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct Entry
{
	private:
		set<string> definitions;
		string word;
	
	public:
		Entry(string usrWord, string usrDef)
		{
			word = usrWord;
			AddDefinition(usrDef);
		}

		void AddDefinition(string def)
		{
			definitions.insert(def);
		}

		void WriteToFile(ofstream& file_dict)
		{
			file_dict << word << endl;
			for(auto def: definitions)
				file_dict << def << endl;
			file_dict << endl;
		}

		string Formatted()
		{
			ostringstream ss;
			ss << word << endl;
			for(size_t t = 0; t < definitions.size(); ++t)
			{
				ss << t+1 << ": " << *(next(definitions.begin(), t)) << endl;
			}

			return ss.str();
		}

		bool operator == (const Entry& comp) const
		{
			return comp.word == this->word;
		}

		bool operator == (const string& comp) const
		{
			return comp == this->word;
		}

		bool operator < (const Entry& comp) const
		{
			return this->word < comp.word;
		}
};

template<typename T>
T Prompt(const set<T>& options)
{
	while(true){
		string input;
		cout << "> ";
		getline(cin,input);

		if(input.empty())
			continue;
		
		T selection = toupper(input[0]);

		if(options.find(selection) != options.end())
			return selection;
	}
}

void ViewDictionary(const set<Entry>& dict)
{
	if(dict.empty())
	{
		cout << "There are no words in the dictionary." << endl;
		return;
	}

	for(auto word: dict)
	{
		cout << word.Formatted() << endl;
	}
}

void AddWord(set<Entry>& dict)
{
	string word;
	string def;

	cout << "Enter a word:" << endl;
	cout << "> ";
	getline(cin, word);
	if(word.empty()){
		cout << "Aborted." << endl;
		return;
	}

	cout << "Enter a definition for " << word << ":" << endl;
	cout << "> ";
	getline(cin, def);
	if(def.empty())
	{
		cout << "Aborted." << endl;
		return;
	}

	// Check if there
	set<Entry>::iterator it = dict.find(Entry(word,""));
	if(it != dict.end())
	{
		Entry entry = *it;
		dict.erase(it);
		entry.AddDefinition(def);
		dict.insert(entry);
		cout << "Updated \"" << word << ".\"" << endl;
	}

	else
	{
		dict.insert(Entry(word, def));
		cout << "Added \"" << word << ".\"" << endl;
	}
}

void DeleteWord(set<Entry>& dict)
{
	if(dict.empty())
	{
		cout << "There are no words in the dictionary." << endl;
		return;
	}
	
	string word;
	cout << "Enter the word you wish to remove:" << endl;
	getline(cin, word);

	if(word.empty())
	{
		cout << "Aborted." << endl;
		return;
	}

	set<Entry>::iterator it = dict.find(Entry(word,""));
	if(it == dict.end())
	{
		cout << "\"" << word << "\" was not found." << endl;
		return;
	}
	else
	{
		dict.erase(it);
		cout << "\"" << word << "\" has been removed." << endl;
	}
	
}

void SaveDictionary(const set<Entry>& dict)
{
	if(dict.empty())
	{
		cout << "There are no words in the dictionary." << endl;
		return;
	}

	ofstream file_dict;
	file_dict.open("dict.dat");

	for(auto ent: dict)
	{
		ent.WriteToFile(file_dict);
	}
}

void ReadDictionary(set<Entry>& dict)
{
	ifstream file_dict;
	file_dict.open("dict.dat");

	while(!file_dict.eof())
	{
		string word;
		string def;
		set<string> defs;

		// Read word
		getline(file_dict, word);
		if(word.empty())
		{
			break;
		}

		cout << "Reading " << word << endl;
		// Read def
		getline(file_dict, def);
		if(def.empty())
		{
			break;
		}
		cout << "Reading " << def << endl;
		defs.insert(def);

		// Read more defs if present
		getline(file_dict, def);
		while(!def.empty())
		{
			defs.insert(def);
		}

		Entry new_ent = Entry(word, *(defs.begin()));
		if(defs.size() > 1)
		{
			for(set<string>::iterator t = next(defs.begin()); t != defs.end(); ++t)
			{
				new_ent.AddDefinition(*t);
			}
		}
		dict.insert(new_ent);
	}
}

template<typename T, typename U>
T DisplayMenu(const map<T,U>& menu, string title)
{
	set<T> options;
	cout << title << ":" << endl;
	for(map<T,U>::const_iterator t = menu.cbegin(); t != menu.cend(); ++t)
	{
		options.insert(toupper(t->first));
		cout << "[" << t->first << "] " << t->second << endl;
	}

	return Prompt(options);
}

int main()
{
	set<Entry> dictionary;

	cout << "Dictionary++" << endl;
	cout << "============" << endl;
	cout << endl;

	map<char, string> menu_main;
	menu_main['1'] = "View dictionary";
	menu_main['2'] = "Add to dictionary";
	menu_main['3'] = "Remove from dictionary";
	menu_main['4'] = "Write dictionary to disk";
	menu_main['5'] = "Load dictionary from disk";
	menu_main['Q'] = "Quit";


	bool quit = false;

	while(quit == false)
	{
		switch(DisplayMenu(menu_main, "Main Menu"))
		{
			case '1':
				cout << endl;
				ViewDictionary(dictionary);
				cout << endl;
				break;
			
			case '2':
				cout << endl;
				AddWord(dictionary);
				cout << endl;
				break;

			case '3':
				cout << endl;
				DeleteWord(dictionary);
				cout << endl;
				break;
			
			case '4':
				cout << endl;
				SaveDictionary(dictionary);
				cout << endl;
				break;

			case '5':
				cout << endl;
				ReadDictionary(dictionary);
				cout << endl;
				break;

			default:
				quit = true;
				break;
		}



	}

	return 0;
}