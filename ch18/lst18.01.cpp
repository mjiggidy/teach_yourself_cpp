#include <list>
#include <vector>

using namespace std;

int main()
{
	list<int> linkInts;
	list<int> listWith10Integers(10);
	list<int> listWIth4IntegersEach99(10, 99);
	list<int> listCopyAnother(listWIth4IntegersEach99);
	
	vector<int> vecIntegers(10, 2017);

	list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

	return 0;
}