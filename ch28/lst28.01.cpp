#include <iostream>

using namespace std;

int main()
{
	cout << "Enter number of integers you wish to reserve: ";
	try
	{
		int input = 0;
		cin >> input;

		int* numArray = new int[input];
		delete[] numArray;
	}
	catch(exception e)
	{
		cout << "Got an exception there: " << e.what() << ".  Bye." << endl;
	}
	

	return 0;
}