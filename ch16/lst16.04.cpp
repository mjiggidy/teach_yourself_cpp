#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sample = "Good day, String!  String is pretty!  String is nice, too!";
	string search;
	
	cout << "Sample string is: \"" << sample << "\"" << endl;

	cout << "Whatcha wanna find?" << endl;
	cin >> search;

	size_t charPos  = sample.find(search);
	if(charPos != string::npos)
		cout << "First instance \"" << search << "\" is at pos " << charPos << endl;
	else
		cout << "String not found." << endl;

	cout << "Locating all instances of substring \"" << search << "\"" << endl;
	size_t subStrPos = sample.find(search);

	while(subStrPos != string::npos)
	{
		cout << "\"" << search << "\" found at position " << subStrPos << endl;
		subStrPos = sample.find(search, subStrPos+1);
	}	

	return 0;
}