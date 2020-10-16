#include <iostream>
using namespace std;

int main()
{
	int* pointsToMany = new(nothrow) int[0xffffffff*30];

	if(pointsToMany){
		cout << "Got em at 0x" << hex << pointsToMany << endl;
		delete[] pointsToMany;
	}
	else
	{
		cout << "Nope" << endl;
	}

	return 0;	
}