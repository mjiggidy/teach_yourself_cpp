#include <iostream>
using namespace std;

int main(){
	char sayHello[] = {'H','e','l','l','o',' ', 'W','o','r','l','d','!','\0'};
	
	cout << sayHello << endl;
	cout << "Size of array: " << sizeof(sayHello) << endl;

	sayHello[5] = '\0';
	cout << sayHello << endl;
	cout << "Size of array: " << sizeof(sayHello) << endl;

	return 0;
}