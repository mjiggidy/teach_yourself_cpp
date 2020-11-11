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
	list<int> linkInts1;

	linkInts1.insert(linkInts1.begin(), 2);
	linkInts1.insert(linkInts1.begin(), 1);

	linkInts1.insert(linkInts1.end(), 3);

	cout << "Contents of linkInts1:" << endl;
	DisplayContents(linkInts1);

	list<int> linkInts2;
	linkInts2.insert(linkInts2.begin(), 4, 0);

	cout << "Contents of linkInts2:" << endl;
	DisplayContents(linkInts2);

	list<int> linkInts3;
	linkInts3.insert(linkInts3.begin(), linkInts1.begin(), linkInts1.end());

	cout << "Contents of linkInts3:" << endl;
	DisplayContents(linkInts3);

	return 0;
}