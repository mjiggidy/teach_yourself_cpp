#include <iostream>
using namespace std;

void GetSquare(const int& number, int& result)
{
	result = number * number;
}

int main()
{
	int number=0, result=0;
	cout << "Gimme a number: ";
	cin >> number;
	GetSquare(number, result);
	cout << "Hope you don't mind I squared it: " << result << endl;

	return 0;
}