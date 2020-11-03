#include <iostream>
#include <string>

using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.14159265
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main()
{
	int numbers[ARRAY_LENGTH] = {0};
	cout << "Array's length: " << sizeof(numbers) / sizeof(int) << endl;
	MY_DOUBLE radius = 0;
	cin >> radius;
	cout << "Area is: " << PI * radius * radius << endl;
	string favoriteWhiskey(FAV_WHISKY);
	cout << "My favorite drink is: " << FAV_WHISKY << endl;

	return 0;
}