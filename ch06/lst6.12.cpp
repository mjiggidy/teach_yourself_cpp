#include <iostream>
#include <string>
using namespace std;

int main(){
	int someNums[] = {1, 101, -1, 40, 2040};

	for(auto aNum: someNums){
		cout << aNum << "  ";
	}
	cout << endl;

	for(int anElement: {5, 222, 110, -45, 2017}){
		cout << anElement << '  ';
	}
	cout << endl;

	char charArray[] = {'h','e','l','l','o'};
	for(auto aChar: charArray){
		cout << aChar << " ";
	}
	cout << endl;

	string sayHello = "What's up?";
	for(auto aChar: sayHello){
		cout << aChar << " ";
	}
	cout << endl;

	return 0;
}