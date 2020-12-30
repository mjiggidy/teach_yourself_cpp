#include <iostream>
#include <exception>

using namespace std;

const double Divide(const double& dividend, const double& divisor)
{
	if(divisor == 0)
	{
		throw "Dividing by zero is a crime against humanity";
	}
	
	return (dividend/divisor);
}

int main()
{
	double dividend = 0.0;
	double divisor  = 0.0;
	
	cout << "Enter a dividend: ";
	cin >> dividend;
	cout << "Okay now enter a divisor (" << dividend << "/?): ";
	cin >> divisor;

	try
	{
		cout << dividend << " / " << divisor << " = " << Divide(dividend, divisor);
	}
	catch(const char* e)
	{
		cerr << "Error dividing " << dividend << " by " << divisor << ": " << e << endl;
		return 1;
	}

	return 0;
}