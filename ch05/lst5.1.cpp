#include <iostream>
using namespace std;

int main(){
	
	int input[2] = {0};
	
	cout << "Enter two integers, please: " << endl;
	cout << "1: ";
	cin >> input[0];
	cout << "2: ";
	cin >> input[1];
	cout << endl;

	cout << input[0] << " + " << input[1] << " = " << input[0] + input[1] << endl;
	cout << input[0] << " - " << input[1] << " = " << input[0] - input[1] << endl;
	cout << input[0] << " * " << input[1] << " = " << input[0] * input[1] << endl;
	cout << input[0] << " / " << input[1] << " = " << input[0] / input[1] << endl;
	cout << input[0] << " % " << input[1] << " = " << input[0] % input[1] << endl;

	cout << endl << "Input array contains " << sizeof(input) / sizeof(int) << " element(s)" << endl;

	return 0;
}