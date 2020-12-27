#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<typename T>
struct DisplayElement
{
	int count;
	DisplayElement():count(0){}

	void operator() (const T& element)
	{
		++count;
		cout << element << " ";
	}
};

int main()
{
	vector<int> nums{420, 69, -1, 80085};
	cout << "Elements in the vector are: " << endl;
	DisplayElement<int> functor = for_each(nums.cbegin(), nums.cend(), DisplayElement<int>());
	cout << endl;
	cout << "Displayed " << functor.count << " elements there" << endl << endl;

	string str = "for_each and strings!";
	int numChars = 0;
	DisplayElement<char> funcstr = for_each(str.cbegin(), str.cend(), DisplayElement<char>());
	cout << endl;
	cout << "Displayed " << funcstr.count << " characters, too." << endl;

	return 0;
}