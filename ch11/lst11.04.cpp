#include <iostream>

using namespace std;

class Fish
{
	public:
		Fish()
		{
			cout << "I make fish." << endl;
		}
		virtual ~Fish()
		{
			cout << "I destroy fish.  Such is life." << endl;
		}
};

class Tuna: public Fish
{
	public:
		Tuna()
		{
			cout << "I made a tuna." << endl;
		}
		~Tuna()
		{
			cout << "I have removed the tuna." << endl;
		}
};

void DeleteFishMemory(Fish* pFish)
{
	delete pFish;
}

int main()
{
	cout << "Makin' room for tuna" << endl;
	Tuna* myTuna = new Tuna();
	cout << "Taking care of the tuna" << endl;
	DeleteFishMemory(myTuna);

	cout << "Stacking the tuna" << endl;
	Tuna myTuna2;
	cout << "Tuna go bye bye" << endl;

	return 0;
}