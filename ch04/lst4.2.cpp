#include <iostream>

using namespace std;

constexpr int Square(int number){
	return number * number;
}

int main(){
	const int ARRAY_LENGTH = 5;
	int elementIndex = 0;

	int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};
	int moreNumbers[Square(ARRAY_LENGTH)];

	while(1){
		cout << "Enter the index of the element to be changed: ";
		cin >> elementIndex;
		
		if(elementIndex < ARRAY_LENGTH)
			break;
		
		cout << "Lets try that again, bro.  Must be between 0 and " << (ARRAY_LENGTH - 1) << "." << endl;
	}

	cout << "Enter new value: ";
	cin >> myNumbers[elementIndex];
	moreNumbers[elementIndex] = myNumbers[elementIndex];

	cout << "Element " << elementIndex << " in array myNumbers is now: " << myNumbers[elementIndex] << endl;
	cout << "Element " << elementIndex << " in array moreNumbers is now: " << moreNumbers[elementIndex] << endl;

	return 0;
}