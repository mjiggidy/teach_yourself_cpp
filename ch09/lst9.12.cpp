#include <iostream>
using namespace std;

class Human
{
	private:
		int age;

	public:
		Human(int humansAge):age(humansAge)
		{
			cout << "Created a human " << age << " years old" << endl;
		}
};

int main()
{
	Human kid(10);
	Human* anotherKid = new Human(16);
	Human thirdKid = 17;
	delete anotherKid;
}