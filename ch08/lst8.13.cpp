#include <iostream>
using namespace std;

/* Bad thing on purpose */

int main()
{
	bool* const isSunny = new bool;

	char input = 'n';
	cout << "Is it sunny today? (y/n): ";
	cin >> input;

	isSunny = new bool;
	*isSunny = true;

	if(input == 'y'){
		*isSunny = true;
	}

	/* Could be invalid pointer if 'n' */
	
	cout << "Boolean flag isSunny says: " << *isSunny << endl;

	delete isSunny;

	return 0;
}