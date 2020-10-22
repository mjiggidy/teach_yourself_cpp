#include <iostream>

using namespace std;

class Human
{
	private:
		int age;
	
	public:
		void SetAge(int inputAge)
		{
			age = inputAge;
		}

		int GetAge()
		{
			return (age>30) ? 26 : age;
		}
};

int main()
{
	Human firstMan;
	firstMan.SetAge(35);

	Human firstWoman;
	firstWoman.SetAge(22);

	cout << "Age of first man is " << firstMan.GetAge() << endl;
	cout << "Age of first woman is " << firstWoman.GetAge() << endl;
		
	return 0;
}