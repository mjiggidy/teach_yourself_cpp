#include <iostream>

using namespace std;

class Date
{
	private:
		int day, month, year;
	
	public:
		Date(int inDay, int inMonth, int inYear): day(inDay), month(inMonth), year(inYear){};

		// Prefix operators

		Date& operator ++ ()
		{
			++day;
			return *this;
		}

		Date& operator -- ()
		{
			--day;
			return *this;
		}

		// Postfix operators
		Date operator ++ (int)
		{
			Date copy(day, month, year);
			++day;
			return copy;
		}

		Date operator -- (int)
		{
			Date copy(day, month, year);
			--day;
			return copy;
		}



		void DisplayDate()
		{
			cout << month << " / " << day << " / " << year << endl;
		}
};

int main()
{
	Date holiday(25, 12, 2016);

	cout << "The date object is initialized to: ";
	holiday.DisplayDate();

	holiday++;
	cout << "Date after prefix increment is: ";
	holiday.DisplayDate();

	holiday--;
	cout << "Date after prefix decrement is: ";
	holiday.DisplayDate();

	return 0;
}