#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> numsInStack;

	cout << "Pushin {25, 10, -1, 5} on stack in that order:" << endl;
	for(const int& x: {25, 10, -1, 5})
	{
		numsInStack.push(x);
	}

	cout << "Stack now contains " << numsInStack.size() << " elements" << endl;

	while(numsInStack.size())
	{
		cout << "Poppin' " << numsInStack.top() << "..." << endl;
		numsInStack.pop();
	}

	if(numsInStack.size() == 0)
	{
		cout << "See?  Told ya I'd pop em" << endl;
	}

	return 0;
}