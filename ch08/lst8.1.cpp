#include <iostream>
using namespace std;

int main(){
	int age = 30;
	const double Pi = 3.1416;

	cout << "Integer age is located at: 0x" << &age << endl;
	cout << "Double Pi is located at: 0x" << &Pi << endl;
	cout << "The size of these addresses are " << sizeof(&age) << " and " << sizeof(&Pi) << " respectively." << endl;

	return 0;
}