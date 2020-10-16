#include <iostream>
using namespace std;

/* Bad thing on purpose */

int main()
{
	bool* const isSunny = new bool;
	*isSunny = false;

	char input = 'n';
	cout << "Is it sunny today? (y/n): ";
	cin >> input;
	
	if(input == 'y')
		*isSunny = true;
	
	cout << "Boolean flag isSunny says: " << *isSunny << endl;

	delete isSunny;

	return 0;
}