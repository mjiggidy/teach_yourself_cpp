#include <iostream>
#include <string>

using namespace std;

int main(){

	string stlString("Hello there, Stringly.");

	cout << "Displaying elements in string using array syntax:" << endl;
	for(size_t charCounter=0; charCounter < stlString.length(); ++charCounter)
	{
		cout << "Character [" << charCounter << "] is: ";
		cout << stlString[charCounter] << endl;
	}
	cout << endl;

	cout << "Displaying elements in string using iterators:" << endl;
	int charOffset = 0;
	string::const_iterator charLocator;
	for(auto charLocator = stlString.cbegin(); charLocator != stlString.cend(); ++charLocator)
	{
		cout << "Character [" << charOffset++ << "] is: ";
		cout << *charLocator << endl;
	}
	cout << endl;

	cout << "The char* represenation of the string is: ";
	cout << stlString.c_str() << endl;

	return 0;
}