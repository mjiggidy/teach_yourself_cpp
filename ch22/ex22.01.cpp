/* Lambda binary predicate to sort in descending order */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<string> names{"Michael","Joy","dawn","edward"};
	vector<string> sorted;

	sorted.resize(names.size());

	sort(names.begin(), names.end(), [](const string& a, const string& b)->bool{
		string lower_a;
		string lower_b;

		lower_a.resize(a.size());
		lower_b.resize(b.size());

		transform(a.cbegin(), a.cend(), lower_a.begin(), ::tolower);
		transform(b.cbegin(), b.cend(), lower_b.begin(), ::tolower);

		return lower_a>lower_b;
	});

	cout << "Names sorted in descending order are:" << endl;
	for_each(names.cbegin(), names.cend(), [](const string& name){cout << name << endl;});

	return 0;
}