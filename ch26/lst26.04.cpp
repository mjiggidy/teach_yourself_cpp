#include <iostream>
#include <memory>

using namespace std;

class Fish
{
	public:
		Fish()
		{
			cout << "Congratulations. Fish constructed." << endl;
		}
		~Fish()
		{
			cout << "Condolences.  Fish not fish no more." << endl;
		}

		void Swim() const
		{
			cout << "The fish it swims in the waters." << endl;
		}
};

void MakeFishSwim(const unique_ptr<Fish>& inFish)
{
	inFish -> Swim();
}

int main()
{
	unique_ptr<Fish> smartFish(new Fish);

	smartFish->Swim();
	MakeFishSwim(smartFish);
	smartFish->Swim();
	return 0;
}