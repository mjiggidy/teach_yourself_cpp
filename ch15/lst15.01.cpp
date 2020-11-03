#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// Allocate a dynamic array of ints
	vector<int> intArray;

	intArray.push_back(50);
	intArray.push_back(2991);
	intArray.push_back(23);
	intArray.push_back(9999);

	cout << "The contents of the vector are:" <<endl;

	// Walk the vector by using an iterator
	vector <int>::iterator arrIterator = intArray.begin();

	while(arrIterator != intArray.end())
	{
		cout << *arrIterator << endl;
		++arrIterator;
	}

	// Find an element
	vector<int>::iterator found = find(intArray.begin(), intArray.end(), 2991);
	while(found != intArray.end())
	{
		cout << *found << endl;
		++found;
	}

	return 0;
}