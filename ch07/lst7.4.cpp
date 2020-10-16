#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex){
	cout << fibIndex << endl;
	if(fibIndex < 2)
		return fibIndex;
	else
		return GetFibNumber(fibIndex-1) + GetFibNumber(fibIndex-2);
}

int main(){
	
	int index = 0;
	cout << "Enter 0-based index of desired Fibonacci Number: ";
	cin >> index;

	cout << "Fibonacci number is: " << GetFibNumber(index) << endl;

	return 0;	
}
