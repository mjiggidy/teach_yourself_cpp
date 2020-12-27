#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	
	string inputString;

	cout << "Give me something I can reverse:" << endl;
	getline(cin, inputString);

	stack<char> reverse(inputString.c_str());



	return 0;
}