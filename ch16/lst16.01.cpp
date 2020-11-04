#include <iostream>
#include <string>

using namespace std;

int main()
{
	const char* constCStyleString = "Hello there, String";
	cout << "Constant string is: " << constCStyleString << endl;

	string strFromConst(constCStyleString);
	cout << "strFromConst is: " << strFromConst << endl;

	string str2("Hello Strang!");
	string str2Copy(str2);
	str2.append(" I BEEN ALTERT");

	cout << "str2Copy is: " << str2Copy << endl;
	cout << "str2 is: " << str2 << endl;

	string strPartialCopy(constCStyleString, 5);
	cout << "strPartialCopy is " << strPartialCopy << endl;

	string strRepeatChars(10, '@');
	cout << "strRepeatChars is " << strRepeatChars << endl;

	return 0;
}