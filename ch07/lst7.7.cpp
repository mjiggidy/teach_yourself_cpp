#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius);
double Area(double radius, double height);

int main(){

	char userSelection = 'z';
	cout << "Enter z for Cylinder, c for Circle: ";
	cin >> userSelection;

	double radius = 0;
	cout << "Enter radius: ";
	cin >> radius;

	if(userSelection == 'z'){
		double height = 0;
		cout << "Enter height: ";
		cin >> height;

		cout << "Area of a cylinder is " << Area(radius, height) << endl;
	}
	else
		cout << "Area of a circle is " << Area(radius) << endl;

	return 0;
}

double Area(double radius){
	return Pi * radius * radius;
}

double Area(double radius, double height){
	return 2 * Area(radius) + Area(radius) * height;
}