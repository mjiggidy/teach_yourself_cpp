#include <iostream>
#include <exception>

using namespace std;

int main()
{
	int num_alloc = 0;
	cout << "Enter the number of integers to reserve: ";
	cin >> num_alloc;

	try
	{
		cout << "Okay imma try to rustle up " << num_alloc << " of them integers." << endl;
		int* allocated = new int[num_alloc];
		cout << "Got em with size " << sizeof(*allocated) * num_alloc << endl;
		delete[] allocated;
	}
	catch(bad_alloc& e)
	{
		cerr << "Ope, had some trouble allocating memory there: " << e.what() << endl;
		return -1;
	}
	catch(...)
	{
		cerr << "Something happened, and I don't even know what." << endl;
		return -1;
	}

	return 0;
}