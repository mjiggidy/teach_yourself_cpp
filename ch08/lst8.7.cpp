#include <iostream>
using namespace std;

int main()
{
	int* pointsToAnAge = new int;
	cout << "Enter your dog's age: ";
	cin >> *pointsToAnAge;
	cout << "That dog is " << *pointsToAnAge << " and is stored at 0x" << hex << pointsToAnAge << endl;
	delete pointsToAnAge;

	return 0;
}