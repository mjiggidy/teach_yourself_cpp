#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> nums{101, 42, 69, 420, -8008};
	list<char> chars{'a','e','i','o','u','y'};

	cout << "Displaying elements in the vector using lambda:" << endl;
	for_each(nums.cbegin(), nums.cend(), [](const int& el){cout << el << "\t";});
	cout << endl;

	cout << "Displaying chars using lamdba:" << endl;
	for_each(chars.cbegin(), chars.cend(), [](const char& el){cout << el << "\t";});
	cout << endl;

	return 0;
}