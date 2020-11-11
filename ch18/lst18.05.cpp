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
	list<int> linkInts{0,1,2,3,4,5};

	cout << "Initial contents of list:" << endl;
	DisplayContents(linkInts);

	linkInts.reverse();

	cout << "Contents after reverse():" << endl;
	DisplayContents(linkInts);	

	return 0;
}