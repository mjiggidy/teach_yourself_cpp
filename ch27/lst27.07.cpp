#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your name: ";
	string name;
	getline(cin, name);
	cout << "Well hello there, " << name << "! uwu" << endl;

	return 0;
}