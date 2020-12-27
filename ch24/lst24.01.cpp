#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	stack<int> number;
	stack<double> dblNums;
	stack<double, vector<double>> dblVecStackExtreme;
	stack<int> numCopy(number);

	return 0;
}