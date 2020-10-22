#include <iostream>

using namespace std;

class Fish
{
	public:
		virtual Fish* Clone() = 0;
		virtual void Swim() = 0;
		virtual ~Fish(){};
};

class Tuna: public Fish
{
	public:
		Fish* Clone() override
		{
			return new Tuna(*this);
		}
	
	void Swim() override final
	{
		cout << "Tuna swim now" << endl;
	}
};

class BluefinTuna final: public Tuna
{
	public:
		Fish* Clone() override
		{
			return new BluefinTuna(*this);
		}
};

class Carp final: public Fish
{
	Fish* Clone() override
	{
		return new Carp(*this);
	}

	void Swim() override final
	{
		cout << "Carp do swim tho" << endl;
	}
};

int main()
{
	const int ARRAY_SIZE = 4;

	Fish* myFishes[ARRAY_SIZE] = {NULL};
	myFishes[0] = new Tuna();
	myFishes[1] = new Carp();
	myFishes[2] = new BluefinTuna();
	myFishes[3] = new Carp();

	Fish* myNewFishes[ARRAY_SIZE];
	for(int idx = 0; idx < ARRAY_SIZE; ++idx)
	{
		myNewFishes[idx] = myFishes[idx]->Clone();
		myNewFishes[idx]-> Swim();
	}

	for(int idx=0; idx<ARRAY_SIZE; ++idx)
	{
		delete myFishes[idx];
		delete myNewFishes[idx];
	}

	return 0;
}