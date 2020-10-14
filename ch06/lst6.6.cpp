#include <iostream>
using namespace std;

int main(){

	int inputs[2] = {0};

	cout << "Enter two numbers: " << endl;
	cin >> inputs[0];
	cin >> inputs[1];

	cout << ((inputs[0] > inputs[1]) ? inputs[0] : inputs[1]) << " was bigger." << endl;

	return 0;
}