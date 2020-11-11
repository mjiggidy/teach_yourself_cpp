#include <iostream>
#include <list>

using namespace std;

inline bool SortPredicate_Descending(const int& l, const int& r)
{
	return (l>r);
}

template <typename T>
void DisplayContents(const T& container)
{
	for(auto el = container.cbegin(); el != container.cend(); ++el)
	{
		cout << *el << '\t';
	}
	cout << endl;
}

int main()
{
	list<int> linkInts{0, -1, 2011, 444, -5};

	cout << "initial contents of the list are:" << endl;
	DisplayContents(linkInts);

	linkInts.sort();

	cout << "Order after sort():" << endl;
	DisplayContents(linkInts);

	linkInts.sort(SortPredicate_Descending);
	cout << "Order after sort() via predicate:" << endl;
	DisplayContents(linkInts);

	return 0;
}