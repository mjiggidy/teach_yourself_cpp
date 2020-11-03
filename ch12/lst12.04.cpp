#include <iostream>

using namespace std;

class Date
{
	private:
		int month, day, year;
		string dateInString;	
		
	public:


		Date(int inMonth, int inDay, int inYear): month(inMonth), day(inDay), year(inYear){};

		Date operator + (int daysToAdd)
		{
			Date newDate(month, day + daysToAdd, year);
			return newDate;
		}

		Date operator + (const Date& dateToAdd)
		{
			Date newDate(month+dateToAdd.month, day+dateToAdd.day, year+dateToAdd.day);
			return newDate;
		}

		void DisplayDate()
		{
			cout << month << "/" << day << "/" << year << endl;
		}
};

int main()
{
	Date Holiday(12, 25, 2020);
	cout << "Holiday on: ";
	Holiday.DisplayDate();

	Date NextHoliday(Holiday+6);
	cout << "Next holiday on: ";
	NextHoliday.DisplayDate();

	Date crazyDay(0, 6, 0);
	Date final = Holiday + crazyDay;

	cout << "Experiment yields: ";
	final.DisplayDate();


	return 0;
}