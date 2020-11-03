#include <iostream>
#include <string>

using namespace std;

template <typename Type>
const Type& GetMax(const Type& value1, const Type& value2)
{
	return (value1 > value2) ? value1 : value2;
}

template <typename Type>
void DisplayComparison(const Type& value1, const Type& value2)
{
	cout << "GetMax(" << value1 << "," << value2 << ") = " << GetMax(value1, value2) << endl;
}

int main()
{
	int num1 = -101, num2 = 2011;
	DisplayComparison(num1, num2);

	double d1 = 3.14159265, d2 = 3.141592652;
	DisplayComparison(d1, d2);

	string name1("Jack"), name2("John");
	DisplayComparison(name1, name2);

	return 0;
}