#include <iostream>
using namespace std;

int main(){

	enum DaysOfWeek{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	int day = Sunday;

	cout << "Find out what days of the week are named after, through the power of computers!" << endl;
	cout << "Enter a number for a day of the week (Sunday = 0): ";
	cin >> day;

	switch(day){
		case Sunday:
			cout << "Sunday was named after the Sun!" << endl;
			break;
		case Monday:
			cout << "Monday was named after the Moon!" << endl;
			break;
		case Tuesday:
			cout << "Tuesday was named after Mars!" << endl;
			break;
		case Wednesday:
			cout << "Wednesday was named after Mercury!" << endl;
			break;
		case Thursday:
			cout << "Thursday was named after Jupiter!" << endl;
			break;
		case Friday:
			cout << "Friday was named after Venus!" << endl;
			break;
		case Saturday:
			cout << "Saturday was named after Saturn!" << endl;
			break;
		default:
			cout << "Fat Tuesday was named after yo momma!" << endl;
			break;
	}

	return 0;
}