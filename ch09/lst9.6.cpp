#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		int age;
		string name;
	
	public:
		Human(string humanName="Adam", int humanAge=420)
			:name(humanName), age(humanAge)
		{
			cout << "Constructed a human " << name << ", age " << age << "." << endl;
		}
};

int main()
{
	Human* person = new Human("William", 69);
	delete person;
	return 0;
}