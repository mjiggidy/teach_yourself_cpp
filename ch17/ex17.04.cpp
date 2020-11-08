#include <iostream>
#include <deque>

using namespace std;

template<typename T>
void DisplayDeque(const deque<T>& strangs)
{
	for(T thing: strangs)
	{
		cout << thing << endl;
	}
}

int main()
{
	deque<string> strangs = {"Hello"s, "Containers are cool!"s,"C++ is evolving!"s,"YO MAMMA AHHAHAA"s};
	
	DisplayDeque(strangs);
	
	return 0;
}