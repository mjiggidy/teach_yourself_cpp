#include <iostream>

using namespace std;

class Fish
{
	public:
		virtual void Swim()
		{
			cout << "Fish swims in the water" << endl;
		}

		virtual ~Fish(){}
};

class Tuna: public Fish
{
	public:
		void Swim()
		{
			cout << "Tuna swims all fast" << endl;
		}

		void BecomeDinner()
		{
			cout << "Is sushi now" << endl;
		}
};

class Carp: public Fish
{
	public:
		void Swim()
		{
			cout << "Carp take it time in lake" << endl;
		}

		void Talk()
		{
			cout << "Carp spoke, incoherently" << endl;
		}
};

void DetectFishType(Fish* objFish)
{
	Tuna* objTuna = dynamic_cast<Tuna*>(objFish);
	if(objTuna)
	{
		cout << "Tuna detected" << endl;
		objTuna->BecomeDinner();
	}

	Carp* objCarp = dynamic_cast<Carp*>(objFish);
	if(objCarp)
	{
		cout << "Confirmed Carp.  It say:" << endl;
		objCarp->Talk();
	}

	cout << "Verifying type using virtual Fish::Swim:" << endl;
	objFish->Swim();
}

int main()
{
	Carp myLunch;
	Tuna myDinner;

	DetectFishType(&myDinner);

	cout << endl;

	DetectFishType(&myLunch);

	return 0;
}