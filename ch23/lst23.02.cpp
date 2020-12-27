#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
bool IsEven(const T& number)
{
	return (number%2) == 0;
}

int main()
{
	vector<int> numsInVec{420, 69, -1, 80085};
	size_t numZeroes = count(numsInVec.cbegin(), numsInVec.cend(), 0);
	cout << "Looks like we dun got " << numZeroes << " zeroes in there" << endl << endl;

	size_t numsEven = count_if(numsInVec.cbegin(), numsInVec.cend(), IsEven<int>);
	cout << "And we also got " << numsEven << " of them evens" << endl;


	return 0;
}