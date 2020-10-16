#include <iostream>
using namespace std;

int main()
{
	int* numbers = NULL;
	int numcount = 0;

	while(numcount < 1){
		cout << "How many numbers you wanna do?: ";
		cin >> numcount;
	}

	numbers = new int[numcount];

	for(int idx=0; idx<numcount; ++idx){
		cout << idx+1 << ": ";
		cin >> *(numbers + idx);
	}
	// hehehe sshhh
	cout << "*:";
	cin >> *(numbers + numcount);

	cout << "Displaying them now:" << endl;

	for(int idx=0; idx<numcount; ++idx){
		cout << idx+1 << ": " << *(numbers++) << endl;
	}

	cout << "*: " << *numbers << endl;

	delete[] numbers;

	return 0;

}