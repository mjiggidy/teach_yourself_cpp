#include <iostream>
#include <string>

using namespace std;

#define SQUARE(x) ((x) * (x))
#define PI 3.14159265
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int main()
{
	cout << "Enter an integer: ";
	int num = 0;
	cin >> num;

	cout << "SQUARE(" << num << ") = " << SQUARE(num) << endl;
	cout << "AREA_CIRCLE(" << num << ") = " << AREA_CIRCLE(num) << endl << endl;

	cout << "Enter another integer: ";
	int num2 = 0;
	cin >> num2;

	cout << "MIN(" << num << "," << num2 << ") = " << MIN(num, num2) << endl;
	cout << "MAX(" << num << "," << num2 << ") = " << MAX(num, num2) << endl;

	return 0;
}