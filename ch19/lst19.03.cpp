#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
	for(T::const_iterator t = container.cbegin(); t != container.cend(); ++t)
	{
		cout << *t << '\t';
	}
	cout << endl;
}

int main()
{
	set<int> setInts{420, 69, 80085, 8008135};
	cout << "We're workin' with these numbers:" << endl;
	DisplayContents(setInts);
	cout << endl;

	set<int>::iterator t = setInts.find(80085);
	if(t != setInts.end())
	{
		cout << "Element " << *t << " found at position " << distance(setInts.begin(), t) << endl;
	}
	else
	{
		cout << "Element not found." << endl;
	}
	
}