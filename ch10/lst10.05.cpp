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

		void Swim()
		{
			Fish::Swim();
			cout << "It tuna swim so fast u fartt" << endl;
		}
};

class Carp: public Fish
{
	public:
		Carp(): Fish(true){}

		void Swim()
		{
			Fish::Swim();
			cout << "Haha! So slow swim carp!" << endl;
		}
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