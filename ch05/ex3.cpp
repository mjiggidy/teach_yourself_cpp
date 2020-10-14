#include <iostream>
using namespace std;

int main(){

	bool inputs[2] = {false};

	cout << "Enter 0 or 1 for the first input: ";
	cin >> inputs[0];

	cout << "Enter 0 or 1 for the second input: ";
	cin >> inputs[1];

	cout << endl << "Bitwise operators are as follows:" << endl;
	
	cout << "Bitwise AND (&): " << (inputs[0] & inputs[1]) << endl;
	cout << "Bitwise  OR (|): " << (inputs[0] | inputs[1]) << endl;
	cout << "Bitwise XOR (^): " << (inputs[0] ^ inputs[1]) << endl;

	return 0;
}