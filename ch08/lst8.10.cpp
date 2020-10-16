#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi, const double* const ptrRadius, double* const ptrArea)
{
	if(ptrPi && ptrRadius && ptrArea)
		*ptrArea = *ptrPi * *ptrRadius * *ptrRadius;
}

int main()
{
	const double Pi = 3.14159265;
	double radius = 0;
	double area = 0;

	cout << "Enter the radius of a circle: ";
	cin >> radius;
	CalcArea(&Pi, &radius, &area);

	cout << "Dat area is " << area << endl;

	return 0;
}