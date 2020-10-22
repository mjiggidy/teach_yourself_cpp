#include <iostream>

using namespace std;

class FishDummyMember
{
	public:
		FishDummyMember()
		{
			cout << "FishDummyMember represent" << endl;
		}

		~FishDummyMember()
		{
			cout << "Ain't no FishDummyMember no mo" << endl;
		}
};

class Fish
{
	protected:
		FishDummyMember dummy;
	
	public:
		Fish()
		{
			cout << "Fish constructor is feelin fresh" << endl;
		}
		~Fish()
		{
			cout << "Fish goin belly up" << endl;
		}
};

class TunaDummyMember
{
	public:
		TunaDummyMember()
		{
			cout << "Dis da Tuna, dummy. 'member?" << endl;
		}
		~TunaDummyMember()
		{
			cout << "TunaDummy Dismembered" << endl;
		}
};

class Tuna: public Fish
{
	private:
		TunaDummyMember dummy;
	
	public:
		Tuna()
		{
			cout << "Tuna can opened" << endl;
		}
		~Tuna()
		{
			cout << "Tuna gone stank" << endl;
		}
};

int main()
{
	Tuna myDinner;

	return 0;
}