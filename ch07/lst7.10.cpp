#include <iostream>
using namespace std;

inline long DoubleNum(int inputNum){
	return inputNum * 2;
}

int main(){
	
	int inputNum = 0;
	cout << "Enter an integer: ";
	cin >> inputNum;

	cout << "Double is: " << DoubleNum(inputNum) << endl;

	return 0;
}