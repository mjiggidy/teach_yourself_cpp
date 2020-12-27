#include <iostream>
#include <queue>

using namespace std;

class Person
{
	public:
		int age;
		bool isFemale;
		Person(const int& in_age, const bool& in_female): age(in_age), isFemale(in_female){};
	
	bool operator<(const Person& comp) const
	{
		if(comp.age > age)
			return true;
		else if(comp.isFemale && !isFemale)
			return true;
		else if(!comp.isFemale && isFemale)
			false;
		else
			return false;
	}
};

int main()
{
	priority_queue<Person> people;

	people.push(Person(42, true));
	people.push(Person(16, true));
	people.push(Person(17, false));
	people.push(Person(42, false));
	people.push(Person(3, true));

	cout << "There are " << people.size() << " in the queue:" << endl;
	while(people.size())
	{
		Person dude = people.top();
		cout << "Age " << dude.age << ", ";
		if(dude.isFemale)
			cout << "Feminine";
		else
			cout << "Manly";
		cout << endl;
		people.pop();
	}

	return 0;
}

