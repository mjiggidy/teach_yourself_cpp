#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> integers{420,69,711};

	for(size_t index = 0; index < integers.size(); ++index)
	{
		cout << "Element[" << index << "] = " << integers[index] << endl;
	}

	integers[2] = 2012;
	cout << "After replacement:" << endl;
	cout << "Element[2] = " << integers[2] << endl;
	
	return 0;
}