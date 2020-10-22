#include <iostream>

using namespace std;

class Fish
{
	public:
		virtual void Swim()
		{
			cout << "Dis fish SWIMS." << endl;
		}
};

class Carp: public Fish
{
	public:
		void Swim()
		{
			cout << "See that carp swimmin haha" << endl;
		}
};

class Tuna: public Fish
{
	public:
		void Swim()
		{
			cout << "Tuna do be swammin' tho" << endl;
		}
};

void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
	Tuna myDinner;
	Carp myLunch;
	Fish someFish;

	MakeFishSwim(myLunch);
	MakeFishSwim(myDinner);
	MakeFishSwim(someFish);

	return 0;
}