#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> numsInQ;

	cout << "Inserting {10, 5, -1, 20} into queue..." << endl;
	for(const int& x: {10, 5, -1, 20})
	{
		numsInQ.push(x);
	}
	cout << "So now we got " << numsInQ.size() << " in there." << endl;

	while(numsInQ.size())
	{
		cout << "Front: " << numsInQ.front() << '\t' << "Back: " << numsInQ.back() << endl;
		numsInQ.pop();
	}

	cout << "Smoked 'em" << endl;

	return 0;
}