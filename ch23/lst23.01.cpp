#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums{420, 69, 80085, -1};

	cout << "Enter a number to find in the collection: ";
	int numToFind = 0;
	cin >> numToFind;

	auto element = find(nums.cbegin(), nums.cend(), numToFind);

	if(element != nums.cend())
		cout << endl << "Value " << *element << " has been found!" << endl;
	else
		cout << endl << "Nah." << endl;

	auto elementIf = find_if(nums.cbegin(), nums.cend(), [numToFind](const int& num){return num < numToFind;});
	
	if(elementIf != nums.cend())
	{
		cout << endl << "Found ";
		while(elementIf != nums.cend())
		{
			cout << *elementIf << ' ';
			++elementIf;
		}
		cout << "which are less than " << numToFind << "." << endl;
	}
	

	return 0;
}