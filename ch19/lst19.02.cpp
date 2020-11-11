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

int main()
{
	set<int> setInts{202, 151, 420, 69};
	setInts.insert(69);
	cout << "Contents of the set: " << endl;
	DisplayContents(setInts);
	cout << endl;

	multiset<int> msetInts;
	msetInts.insert(setInts.begin(), setInts.end());
	msetInts.insert(69);
	cout << "Contents of the multiset: " << endl;
	DisplayContents(msetInts);
	cout << endl;

	cout << "Number of instances of 69 in the multiset are: " << msetInts.count(69) << endl;

	return 0;
}