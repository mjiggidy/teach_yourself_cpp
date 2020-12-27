#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> sources;

	cout << "Enter numbers.  0 to stop:" << endl;
	while(true)
	{
		int input;
		cout << ">";
		cin >> input;

		if(input == 0)
			break;
		else
			sources.push_back(input);
	}

	cout << endl << "Okay now enter a number to add to each of these:" << endl;
	int add;
	cin >> add;

	cout << endl << "With " << add << " added to each element, we now have:" << endl;
	for_each(sources.cbegin(), sources.cend(), [add](const int& num){cout << num + add << '\t';});

	return 0;
}