#include <iostream>
using namespace std;

int main(){

	int  inputs[2] = {0};
	char op = '\0';

	cout << "Enter two integers: " << endl;
	cout << "1: ";
	cin >> inputs[0];
	cout << "2: ";
	cin >> inputs[1];

	cout << "Enter \'m\' to multiply; anything else to add: ";
	cin >> op;

	long double result = 0;
	if(op == 'm'){
		result = inputs[0] * inputs[1];
	}
	else{
		result = inputs[0] + inputs[1];
	}

	cout << "The result is: " << result << endl;

	return 0;
}