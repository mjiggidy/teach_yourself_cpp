#include <iostream>
#include <set>
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

char Prompt(const set<char> options)
{
	while(true){
		string input;
		cout << "> ";
		getline(cin,input);

		if(input.empty())
			continue;
		
		char selection = toupper(input[0]);

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

int main()
{
	set<Entry> dictionary;

	cout << "Dictionary++" << endl;
	cout << "============" << endl;
	cout << endl;

	bool quit = false;

	while(quit == false)
	{
		cout << "Main Menu:" << endl;
		cout << "[1] View dictionary" << endl;
		cout << "[2] Add to dictionary" << endl;
		cout << "[3] Remove from dictionary" << endl;
		cout << "[Q] Quit" << endl;

		switch(Prompt({'1','2','3','Q'}))
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

			default:
				quit = true;
				break;
		}



	}

	return 0;
}