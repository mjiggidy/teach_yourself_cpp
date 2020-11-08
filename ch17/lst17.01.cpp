#include <vector>

using namespace std;

int main()
{
	vector<int> integers;
	vector<int> initVector{202, 2017, -1};
	vector<int> tenElements(10);
	vector<int> copyVector(tenElements);
	vector<int> partialCopy(tenElements.cbegin(), tenElements.cbegin() + 5);

	return 0;
}