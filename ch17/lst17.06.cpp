#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void DisplayVector(const vector<T>& inVec)
{
	for(vector<T>::const_iterator element = inVec.cbegin(); element != inVec.cend(); ++element)
	{
		cout << *element << endl;
	}
	cout << endl;
}

int main()
{
	vector<int> integers = {50,1,987,1001};

	cout << "Vector contains " << integers.size() << " elements" << endl;
	DisplayVector(integers);

	integers.pop_back();

	cout << "After a call to ol' pop_back(), vector now contains " << integers.size() << " elements" << endl;
	
	DisplayVector(integers);
	
	cout << "How about that." << endl;

	

	return 0;
}