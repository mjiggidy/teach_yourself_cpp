#include <iostream>

using namespace std;

union SimpleUnion
{
	int num;
	char alphabet;
};

struct ComplexType
{
	enum DataType
	{
		Int,
		Char
	} Type;

	union Value
	{
		int num;
		char alphabet;

		Value() {}
		~Value(){}
	} value;
};

void DisplayComplexType(const ComplexType& obj)
{
	switch(obj.Type)
	{
		case ComplexType::Int:
			cout << "Union contains number: " << obj.value.num << endl;
			break;

		case ComplexType::Char:
			cout << "Union contains character: " << obj.value.alphabet << endl;
			break;
		default:
			cout << "Say what?" << endl;
			break;
	}
}

int main()
{
	/// Quick aggregate test
	int numbers[] {1, 2, 3};
	cout << numbers[0] << endl;;	

	SimpleUnion u1, u2;
	u1.num = 2100;
	u2.alphabet = 'C';

	cout << "Union u1 contains " << u1.num << " of size " << sizeof(u1) << endl;
	cout << "Union u2 contains " << u2.alphabet << " of size " << sizeof(u2) << endl;

	ComplexType myData1, myData2;
	myData1.Type = ComplexType::Int;
	myData1.value.num = 2017;
	myData2.Type = ComplexType::Char;
	myData2.value.alphabet = '!';

	DisplayComplexType(myData1);
	DisplayComplexType(myData2);

	return 0;
}