#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

template<typename T>
struct IsMultiple
{
	T divisor;
	IsMultiple(const T& div):divisor(div){}

	bool operator() (const T& element) const
	{
		return (element % divisor) == 0;
	}
};

int main()
{
	vector<int> numbers{25,26,27,28,29,30,31};
	cout << "The vector contains all dem numbers" << endl;
	for(const int& num: numbers)
	{
		cout << num << "  ";
	}
	cout << endl;

	cout << "Enter divisor (> 0): ";
	int divisor = 2;
	cin >> divisor;

	auto element = find_if(numbers.begin(), numbers.end(), IsMultiple<int>(divisor));

	if(element != numbers.end())
	{
		cout << "First element in vector divisible by " << divisor << ": " << *element << endl;
	}


	return 0;
}