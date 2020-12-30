#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Hey - default!" << endl;
	cout << setw(35) << "Hey - right aligned!" << endl;
	cout << setw(35) << setfill('*') << "Hey - right aligned!" << endl;
	cout << "Hey - back to default!" << endl;

	return 0;
}