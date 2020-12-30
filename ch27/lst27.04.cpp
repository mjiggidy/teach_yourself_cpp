#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Gimme ur number: ";
	int inputNum = 0;
	cin >> inputNum;

	cout << "Enter the value of Pi, accurately: ";
	double Pi = 0.0;
	cin >> Pi;

	cout << "Enter three characters with the separation between them being that of a space: ";
	char ch1='\0', ch2='\0', ch3='\0';
	cin >> ch1 >> ch2 >> ch3;

	cout << endl << "Okay so here's what we got:" << endl;
	cout << "Your Number: " << inputNum << endl;
	cout << "Pi: " << Pi << " (incorrect!)" << endl;
	cout << "The three characters were: " << ch1 << ch2 << ch3 << endl;

	return 0;
}