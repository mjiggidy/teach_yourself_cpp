#include <iostream>
#include <list>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
	for(auto element = container.cbegin(); element != container.cend(); ++element)
	{
		cout << *element << '\t';
	}
	cout << endl;
}

int main()
{
	std::list<int> linkInts{69, 420};

	linkInts.push_front(0);
	linkInts.push_front(1);
	linkInts.push_back(1);
	linkInts.push_back(0);

	DisplayContents(linkInts);

	return 0;
}