#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> vals = {8,5,6,2,3,1};

	cout << "So we got this list:" << endl;
	for(list<int>::const_iterator ent = vals.cbegin(); ent != vals.cend(); ++ent)
	{
		cout << *ent << '\t';
	}
	cout << endl << endl;

	cout << "Counting from 5:" << endl;
	list<int>::const_iterator ent = vals.cbegin();
	++ent;

	for(auto x = ent; x != vals.cend(); ++x)
	{
		cout << *x << '\t';
	}
	cout << endl << endl;

	vals.sort();
	cout << "After sorted, counting from 5:" << endl;
	for(auto x = ent; x != vals.cend(); ++x)
	{
		cout << *x << '\t';
	}
	cout << endl;
}