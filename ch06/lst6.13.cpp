#include <iostream>
using namespace std;

int main(){

	int inputs[2] = {0};
	
	for(;;){
		cout << "Enter two numbers." << endl;
		cin >> inputs[0];
		cin >> inputs[1];

		cout << "Do you have regrets? (y/n): ";
		char changeNumbers = '\0';

		if(changeNumbers == 'y')
			continue;
		
		cout << "Press x to exit or any other key to recalculate: ";
		cin >> changeNumbers;

		if(changeNumbers == 'x')
			break;
	}

	return 0;
}