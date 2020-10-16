#include <iostream>
using namespace std;

int main()
{
	int arraysize = 0;
	cout << "How many ints shall I reserve in my memory? ";
	cin >> arraysize;

	int* myNumbers = new int[arraysize];
	cout << "Memory allocated at 0x" << myNumbers << hex << endl;
	cout << "It's a whopping " << dec << sizeof(*myNumbers) * arraysize << " bytes.  Foo!" << endl;

	cout << "Delete when ready...";
	cin >> arraysize;

	delete[] myNumbers;

	cout << "Check it out now...";
	cin >> arraysize;

	cout << "Done";
	
	return 0;
}