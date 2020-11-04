#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input;
	string reversed;
	cout << "Give me a string, I'll tell ya if it's a palendrome." << endl;
	getline(cin, input);

	transform(input.begin(), input.end(), input.begin(), ::tolower);
	reversed = input;
	reverse(reversed.begin(), reversed.end());

	if(input == reversed){
		cout << "That there is a palendrome." << endl;
	}

	else
	{
		cout << "That aint' it fam." <<endl;
	}

	return 0;
}