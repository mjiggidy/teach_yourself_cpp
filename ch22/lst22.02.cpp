#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums{69, 420, -80085};

	auto evens = find_if(nums.cbegin(), nums.cend(), [](const int& num){return ((num%2) == 0);});

	if(evens != nums.cend())
		cout << "Even number in the collection is: " << *evens << endl;

	return 0;
}