#include <iostream>
#include <list>

using namespace std;

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
	list<int> linkInts = {4,5,6,-1,2017};

	auto val2 = linkInts.insert(linkInts.begin(), 2);

	cout << "Initial contents of the list:" << endl;
	DisplayContents(linkInts);

	cout << "After erasing element '"<< *val2 << "':" << endl;
	linkInts.erase(val2);
	DisplayContents(linkInts);

	linkInts.erase(linkInts.begin(), linkInts.end());
	cout << "Number of elements after erasing range:" << endl;
	cout << linkInts.size() << endl;

	return 0;
}
