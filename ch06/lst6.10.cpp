#include <iostream>
using namespace std;

int main(){
	const int ARRAY_LENGTH = 5;
	int myNums[ARRAY_LENGTH] = {0};

	cout << "Populate an array of " << ARRAY_LENGTH << " integers" << endl;

	for(int counter=0; counter<ARRAY_LENGTH; ++counter){
		cout << counter+1 << ": ";
		cin >> myNums[counter];
	}

	cout << "Displaying contents of the array:" << endl;
	for(int counter=0; counter<ARRAY_LENGTH; ++counter){
		cout << counter+1 << ": " << myNums[counter] << endl;
	}

	return 0;
}