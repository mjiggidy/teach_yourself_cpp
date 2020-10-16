#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double SurfaceArea(double radius, double height);

int main(){

	double radius=0, height=0;
	cout << "Imagine a cylinder." << endl;
	cout << "Now. What is its radius?: ";
	cin >> radius;

	cout << "Very good.  And its height?: ";
	cin >> height;

	cout << "That cylinder you imagined has a surface area.  It is " << SurfaceArea(radius, height) << endl;

	return 0;
}

double SurfaceArea(double radius, double height){
	return 2 * Pi * radius * radius + 2 * Pi * radius * height;
}