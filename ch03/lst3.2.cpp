#include <iostream>
using namespace std;

void MultiplyNumbers()
{
	int firstNumber, secondNumber = 0;
	
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	// Multiply the two; store as a variable
	int multiplicationResult = firstNumber * secondNumber;

	// Display result
	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

}

int main()
{
	cout << "This program will help you multiply two numbers together." << endl;

	MultiplyNumbers();

	return 0;
}