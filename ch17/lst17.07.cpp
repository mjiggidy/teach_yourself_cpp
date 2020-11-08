#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void DisplayInfo(const vector<T>& vec)
{
	cout << "Size: " << vec.size() << ", ";
	cout << "Capacity: " << vec.capacity() << endl;

	for(vector<T>::const_iterator elem = vec.cbegin(); elem != vec.cend(); ++elem)
	{
		cout << *elem << '\t';
	}
	cout << endl;
}

int main()
{
	vector<int> integers(5);

	cout << "Vector of integers was instantiated with:" << endl;
	DisplayInfo(integers);

	int allocations = 0;
	cout << "How many additional elements you wanna try?" << endl;
	cout << "> ";
	cin >> allocations;

	for(int x=0; x<allocations; ++x)
	{
		integers.push_back(x);
		cout << "After inserting another:" << endl;
		DisplayInfo(integers);
		cout << endl;
	}
	

	return 0;
}