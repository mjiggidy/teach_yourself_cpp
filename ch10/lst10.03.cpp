#include <iostream>

using namespace std;

class Fish
{
	private:
		bool isFreshwaterFish;
	
	public:
		Fish(bool isFreshwater): isFreshwaterFish(isFreshwater){}

		void Swim()
		{
			if(isFreshwaterFish)
				cout << "Swimmin in da laek" << endl;
			else
				cout << "It swim da sea" << endl;
		}
};

class Tuna: public Fish
{
	public:
		Tuna(): Fish(false){}
};

class Carp: public Fish
{
	public:
		Carp(): Fish(true){}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;

	cout << "About my foods:" << endl;
	cout << "Lunch: ";
	myLunch.Swim();
	cout << "Dinner: ";
	myDinner.Swim();

	return 0;
}