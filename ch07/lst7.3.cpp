#include <iostream>
using namespace std;

double Area(double radius, double pi = 3.14159265);

int main()
{
	double radius = 0;
	char changePi = 'n';

	cout << "Enter radius: ";
	cin >> radius;

	cout << "Are you good with my pi? (y/n): ";
	cin >> changePi;

	double circleArea = 0;
	if(changePi == 'n')
	{
		cout << "Oh.  Ok what's your pi then: ";
		double newPi = 0;
		cin >> newPi;
		circleArea = Area(radius, newPi);
	}
	else
	{
		circleArea = Area(radius);
	}

	cout << "The area is " << circleArea << endl;

	return 0;	
}

double Area(double radius, double pi)
{
	return pi * radius * radius;
}