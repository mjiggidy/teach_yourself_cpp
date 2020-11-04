#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Enter a string for case conversion: ";
	string strIn;
	getline(cin, strIn);

	transform(strIn.begin(), strIn.end(), strIn.begin(), ::tolower);
	cout << "Lowercase is: " << strIn << endl;

	return 0;
}