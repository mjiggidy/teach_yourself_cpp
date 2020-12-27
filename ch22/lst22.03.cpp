#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers{420, 69, -8008};

	cout << "Vector contains:" << endl;
	for_each(numbers.cbegin(), numbers.cend(), [](const int& num){cout << num << '\t';});
	cout << endl;

	cout << "Enter a divisor >0: ";
	int divisor = 2;
	cin >> divisor;

	vector<int>::iterator element;

	element = find_if(numbers.begin(), numbers.end(), [divisor](const int& divident){return (divident % divisor) == 0;});

	if(element != numbers.cend())
		cout << "First element in vector divisible by " << divisor << " is: " << *element << endl;
	else
		cout << "Nothin'." << endl;
	

	return 0;
}