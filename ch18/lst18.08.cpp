#include <iostream>
#include <forward_list>

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
	forward_list<int> flistIntegers{3,4,2,2,20};
	flistIntegers.push_front(1);

	cout << "Contents of forward_list: " << endl;
	DisplayContents(flistIntegers);

	flistIntegers.remove(2);
	flistIntegers.sort();
	cout << "Contents after removeing 2 and sorting: "<< endl;
	DisplayContents(flistIntegers);


	return 0;
}