#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> data;
	
	cout << "Forward, List!" << endl;
	cout << "==============" << endl << endl;

	int input = 0;
	cout << "Input some numbers!  -1 when you're done." << endl;
	while(input != -1)
	{
		cout << "> ";
		cin >> input;
		data.push_front(input);
	}

	cout << endl << "Aight so we got:" << endl;
	for(auto val: data)
	{
		cout << val << '\t';
	}
	cout << endl;

	return 0;
}