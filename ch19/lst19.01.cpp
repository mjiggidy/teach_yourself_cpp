#include<set>

template <typename T>
struct SortDescending
{
	bool operator()(const T& lh, const T& rh): const
	{
		return (lh > rh);
	}
};

int main()
{
	using namespace std;

	set<int> setInts;
	multiset<int> msetInts;

	set<int, SortDescending<int>> setInts2;
	multiset<int, SortDescending<int>> msetInts2;

	set<int> setInts3(setInts);
	multiset<int> msetInts3(setInts.cbegin(), setInts.cend());

	return 0;
}