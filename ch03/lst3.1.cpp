#include <iostream>
using namespace std;

int main()
{
	int firstNumber, secondNumber = 0;
	
	cout << "This program will help you multiply two numbers together." << endl;

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	// Multiply the two; store as a variable
	int multiplicationResult = firstNumber * secondNumber;

	// Display result
	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

	return 0;
}