#include <iostream>
#include <map>
#include <string>

using namespace std;

template<typename keytype>
struct ReverseSort
{
	bool operator() (const keytype& key1, const keytype& key2)
	{
		return (key1 > key2);
	}
};

int main()
{
	map<int,string> mapIntToStr1;
	multimap<int,string> mmapIntToStr1;

	map<int,string> mapIntToStr2(mapIntToStr1);
	multimap<int,string> mmapIntToStr2(mmapIntToStr1);

	map<int,string> mapIntToStr3(mapIntToStr1.cbegin(), mapIntToStr1.cend());
	
}