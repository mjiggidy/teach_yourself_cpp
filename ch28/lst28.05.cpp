#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException: public std::exception
{
	string reason;
	public:
		CustomException(const char* why): reason(why) {}

		virtual const char* what() const throw()
		{
			return reason.c_str();
		}
};

double Divide(double dividend, double divisor)
{
	if(divisor == 0)
		throw CustomException("CustomException: Dividing by zero? I would rather die.");
	
	return (dividend/divisor);
}

int main()
{
	double dividend=0.0, divisor=0.0;

	cout << "Enter divident: ";
	cin >> dividend;
	cout << "Enter divisor: ";
	cin >> divisor;

	try
	{
		cout << "Result is: " << Divide(dividend, divisor);
	}
	catch(const exception& e)
	{
		cerr << e.what();
	}	

	return 0;
}