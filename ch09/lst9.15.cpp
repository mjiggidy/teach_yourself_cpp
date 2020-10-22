#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		friend class Utility;
		string name;
		int age;
	
	public:
		Human(string humansName, int humansAge)
		{
			name = humansName;
			age  = humansAge;
		}
};

class Utility
{
	public:
		// DisplayAge() has access to private members of class Human
		// Because it is a friend
		static void DisplayAge(const Human& person)
		{
			cout << person.age << endl;
		}
};

int main()
{
	Human firstMan("Adam", 25);
	cout << "Accessing private member via friend class: " << endl;
	Utility::DisplayAge(firstMan);

	return 0;
}