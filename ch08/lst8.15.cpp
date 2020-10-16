#include <iostream>
using namespace std;

int main()
{
	try
	{
		cout << "Allocating " << dec << 0xffffffff * sizeof(int) * 10 << " bytes." << endl;
		int* pointsToMany = new int[0xffffffff * 10];
		delete[] pointsToMany;
	}
	catch(bad_alloc)
	{
		cout << "Memory allocation failed.  Jeez." << endl;
		return -1;
	}

	return 0;	
}