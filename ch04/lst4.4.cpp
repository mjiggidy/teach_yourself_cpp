#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> dynArray(3);

	dynArray[0] = 365;
	dynArray[1] = -421;
	dynArray[2] = 789;

	cout << "Number of integers in dynamic array: " << dynArray.size() << endl << endl;

	cout << "Enter another element to insert: " << endl;
	int newValue;
	cin >> newValue;
	dynArray.push_back(newValue);
	cout << endl;

	cout << "Number of integers in array now: " << dynArray.size() << endl;
	cout << "Last element in array: " << dynArray[dynArray.size() - 1] << endl;

	return 0;
}