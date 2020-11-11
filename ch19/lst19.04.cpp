#include <iostream>
#include <set>

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

typedef multiset<int> MSET;	// lol why tho

int main()
{
	MSET msetInts{420, 69, 420, 80085, 8008135};

	cout << "Multiset contains " << msetInts.size() << " elements:" << endl;
	DisplayContents(msetInts);

	cout << "Erasing " << msetInts.count(420) << " instance(s) of 420" << endl;
	msetInts.erase(420);

	cout << "Multiset now contains " << msetInts.size() << " elements:" << endl;
	DisplayContents(msetInts);

	return 0;
}