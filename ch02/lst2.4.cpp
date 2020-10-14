#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main(){
	// Call the function
	return DemoConsoleOutput();
}

// Define the function
int DemoConsoleOutput(){
	cout << "Simple string literal" << endl;
	cout << "Writing the number five: " << 5 << endl;
	cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
	cout << "pi is 22 / 7 = " << 22.0 / 7 << endl;
	return 0;
}