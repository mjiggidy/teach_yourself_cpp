#include <iostream>
#include <vector>

using namespace std;

void DisplayVector(const vector<int>& inVec)
{
	for(auto element = inVec.cbegin(); element != inVec.cend(); ++element)
	{
		cout << *element << ' ';
	}
	cout << endl;
}

int main()
{
	// Vector containing 4 elements of value 90
	vector<int> integers(4,90);

	cout << "The initial contents of the vector:" << endl;
	DisplayVector(integers);

	// Insert 25 at the beginning
	integers.insert(integers.cbegin(), 25);

	// Insert two 45s at the end for good measure
	integers.insert(integers.cend(), 2, 45);

	cout << endl << "Contents after the ol' razzle dazzle:" << endl;
	DisplayVector(integers);


	vector<int> another(2,30);
	integers.insert(integers.cbegin() + 1, another.cbegin(), another.cend());
	cout << endl << "Contents after putting one into the other:" << endl;
	DisplayVector(integers);

	return 0;
}