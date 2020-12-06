#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Sturct as a unary operator
template<typename T>
struct DisplayElementKeepCount
{
	int count;

	DisplayElementKeepCount():count(0){}
	
	void operator() (const T& element)
	{
		++count;
		cout << element << ' ';
	}
};

int main()
{

	DisplayElementKeepCount<int>  result_int;
	DisplayElementKeepCount<char> result_char;

	vector<int> numsInVec{0, 1, 2, 3, -1, -9, 0, -999};
	cout << "Vector of integers contains:" << endl;
	result_int = for_each(numsInVec.begin(), numsInVec.end(), DisplayElementKeepCount<int>());

	list<char> charsInList{'a','z','k','d'};
	cout << endl << "List of chars contains:" << endl;
	result_char = for_each(charsInList.begin(), charsInList.end(), DisplayElementKeepCount<char>());

	cout << "Dat functor got called " << result_int.count << " times.";

	return 0;
}