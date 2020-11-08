#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> integers;
	integers.push_back(50);
	integers.push_back(69);
	integers.push_back(420);
	integers.push_back(96);
	integers.push_back(-1);

	cout << "The vector contains " << integers.size() << " elements." << endl;

	return 0;
}