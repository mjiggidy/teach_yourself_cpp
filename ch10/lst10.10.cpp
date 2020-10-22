#include <iostream>

using namespace std;

class Mammal
{
	public:
		void FeedBabyMilk()
		{
			cout << "Taste the milks, little baby.  Feel it upon your lips.  It is me." << endl;
		}
};

class Reptile
{
	public:
		void SpitVenom()
		{
			cout << "Imma spritz ya with my sting juice.  Pssss!" << endl;
		}
};

class Bird
{
	public:
		void LayEggs()
		{
			cout << "thought i was finna poop but nah lol" << endl;
		}
};

class Platypus final: public Mammal, public Bird, public Reptile
{
	public:
		void Swim()
		{
			cout << "My goodness now I'm all wet!" << endl;
		}
};

int main()
{
	Platypus realFreak;

	realFreak.LayEggs();
	realFreak.FeedBabyMilk();
	realFreak.SpitVenom();
	realFreak.Swim();

	return 0;
}