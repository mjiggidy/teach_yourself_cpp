#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Function declarations
double Area(double radius);
double Circumference(double radius);

int main(){

	double radius = 0;
	cout << "Enter radius NOW: ";
	cin >> radius;

	cout << "Area is: " << Area(radius) << endl;
	cout << "Circumference is: " << Circumference(radius) << endl;

	cout <<"Ok?  Good." << endl;

	return 0;
}

double Area(double radius){
	return Pi * radius * radius;
}

double Circumference(double radius){
	return 2 * Pi * radius;
}