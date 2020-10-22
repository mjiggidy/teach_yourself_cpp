#include <iostream>

using namespace std;

class Fish
{
	public:
		virtual void Swim() = 0;
};

class Tuna: public Fish
{
	public:
		void Swim()
		{
			cout << "I swim as a tuna do" << endl;
		}
};

class Carp: public Fish
{
	public:
		void Swim()
		{
			cout << "Am carp do swim" << endl;
		}
};

void MakeFishSwim(Fish& myFish)
{
	myFish.Swim();
}

int main()
{
	Carp carpy;
	Tuna tuney;

	MakeFishSwim(carpy);
	MakeFishSwim(tuney);

	return 0;
}