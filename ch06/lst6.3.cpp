#include <iostream>
using namespace std;

int main(){

	float inputs[2] = {0};
	char  op = '\0';

	cout << "Enter two numbers: " << endl;
	cout << "1: ";
	cin >> inputs[0];
	cout << "2: ";
	cin >> inputs[1];
	
	cout << "Good.  Now, enter \'d\' to divide; anything else to multiply: ";
	cin >> op;

	if(op == 'd'){
		cout << "So you wish to divide!" << endl;
		if(inputs[1] != 0)
			cout << inputs[0] << " / " << inputs[1] << " = " << inputs[0] / inputs[1] << endl;
		else
			cout << "Well, division by zero is not allowed." << endl;
	}
	else{
		cout << "So you wish to multiply!" << endl;
		cout << inputs[0] << " x " << inputs[1] << " = " << inputs[0] * inputs[1] << endl;
	}
	
	return 0;
}