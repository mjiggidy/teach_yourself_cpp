#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length){
	for(int index=0; index<length; index++)
		cout << numbers[index] << " ";
	cout << endl;
}

void DisplayArray(char characters[], int length){
	for(int index=0; index<length; index++)
		cout << characters[index] << " ";
	cout << endl;
}

int main(){
	int myNums[] = {24, 68, -1, 246};
	DisplayArray(myNums, 4);

	char mySatatement[7] = {'H','e','l','l','o','\0'};
	DisplayArray(mySatatement, 6);

	return 0;
}