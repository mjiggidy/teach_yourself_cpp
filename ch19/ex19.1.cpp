#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct Term
{
	string word;
	set<string> definitions;



};


int main()
{
	set<Term> dictionary;

	cout << "Dictionary++" << endl;
	cout << "============" << endl;
	cout << endl;

	bool quit = false;

	while(quit == false)
	{
		cout << "[1] View dictionary" << endl;
		cout << "[2] Add to dictionary" << endl;
		cout << "[3] Remove from dictionary" << endl;
		cout << "[Q] Quit" << endl;

		string input;
		while(true)
		{
			cout << "> ";
			getline(cin, input);
		}

	}

	return 0;
}