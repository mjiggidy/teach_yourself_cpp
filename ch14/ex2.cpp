#include <iostream>
using namespace std;

template<typename T>
T multiply(const T& val1, const T& val2)
{
	return val1 * val2;
}

int main()
{
	cout << "2*4=" << multiply(2,4) << endl;

	return 0;
}