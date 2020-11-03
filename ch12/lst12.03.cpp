#include <iostream>
#include <memory>

using namespace std;

class Date
{
	private:
		int day, month, year;
		string dateInString;
	
	public:
		Date(int inMonth, int inDay, int inYear): month(inMonth), day(inDay), year(inYear){};
		~Date()
		{
			cout << "Aint no more" << endl;
		}

		void DisplayDate()
		{
			cout << month << "/" << day << "/" << year << endl;
		}
};

int main()
{
	unique_ptr<int> smartIntPtr(new int);
	*smartIntPtr = 42;

	cout << "Int value is " << *smartIntPtr << endl;

	unique_ptr<Date> smartDate(new Date(12, 25, 2016));
	cout << "The new instance of date contains: ";

	smartDate->DisplayDate();

	return 0;
}