#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vecMultiplicand{0,1,2,3,4};
	vector<int> vecMultiplier{100,200,300,401, 69};
	vector<int> vecResult;

	vecResult.resize(vecMultiplier.size());

	transform(vecMultiplicand.cbegin(), vecMultiplicand.cend(), vecMultiplier.cbegin(), vecResult.begin(), [](const int& a, const int& b){return a*b;});

	cout << "Multiplicands are: " << endl;
	for_each(vecMultiplicand.cbegin(), vecMultiplicand.cend(), [](const int& num){cout << num << '\t';});

	cout << endl << "Multipliers are:" << endl;
	for_each(vecMultiplier.cbegin(), vecMultiplier.cend(), [](const int& num){cout << num << '\t';});

	cout << endl << "And the results:" << endl;
	for_each(vecResult.cbegin(), vecResult.cend(), [](const int& num){cout << num << '\t';});

	return 0;
}