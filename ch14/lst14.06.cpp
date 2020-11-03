#include <iostream>
using namespace std;

template <typename T>
class TestStatic
{
	public:
		static int staticVal;
};

//template<typename T>
//int TestStatic<T>::staticVal;

int main()
{
	TestStatic<int> intInstance;
	cout << "Setting static val for int to 2011" << endl;
	intInstance.staticVal = 2011;

	TestStatic<double> dblInstance;
	cout << "Setting val for Double to 1011" << endl;
	dblInstance.staticVal = 1011;

	cout << "intInstance is " << intInstance.staticVal << endl;
	cout << "dblInstance is " << dblInstance.staticVal << endl;

	return 0;
}