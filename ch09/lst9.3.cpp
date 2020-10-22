#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		string name;
		int age;
		
	public:
		Human()
		{
			age = 1;
			cout << "Constructed an instance of class Human" << endl;
		}

		Human(string humansName, int humansAge)
		{
			name = humansName;
			age = humansAge;
			cout << "Created human " << name << " of " << age << " years." << endl;
		}

		void SetName(string humansName)
		{
			name = humansName;
		}

		void SetAge(int humanAge)
		{
			age = humanAge;
		}

		string GetName()
		{
			return name;
		}

		void IntroduceSelf()
		{
			cout << "I am " << name << " and am " << age << " years old.  How ya doin'." << endl;
		}
};

int main()
{
	Human firstWoman;
	Human firstMan("Steve", 69);
	firstWoman.SetName("Eve");
	firstWoman.SetAge(32);

	return 0;
}