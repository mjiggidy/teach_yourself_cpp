#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	deque<int> intDeque;

	intDeque.push_back(420);
	intDeque.push_back(69);
	intDeque.push_back(98);

	intDeque.push_front(2);
	intDeque.push_front(1);
	intDeque.push_front(0);

	cout << "Deque after initial loading of the integers:" << endl;

	for(size_t x=0; x<intDeque.size(); x++)
	{
		cout << "Element[" << x << "] = " << intDeque[x] << endl;
	}
	cout << endl;

	// Erase one
	intDeque.pop_front();
	intDeque.pop_back();

	cout << "After that deque got popped front 'n back:" << endl;

	for(auto element = intDeque.cbegin(); element != intDeque.cend(); ++element)
	{
		size_t offset = distance(intDeque.cbegin(), element);
		cout << "Element[" << offset << "] = " << *element << endl;
	}

	return 0;
}