#include <fstream>
#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

struct Human
{
	Human(){};
	Human(const char* inName, int inAge, const char* inDOB): age(inAge)
	{
		strcpy(name, inName);
		strcpy(DOB, inDOB);
	}

	char name[30];
	int age;
	char DOB[20];
};

int main()
{
	Human Input("Michael Jordan", 24, "Oct 1985");

	ofstream fsOut("me.bin", ios_base::out | ios_base::binary);

	if(fsOut.is_open())
	{
		cout << "Writing me to file:" << endl;
		fsOut.write(reinterpret_cast<const char*>(&Input), sizeof(Input));
		fsOut.close();
	}

	ifstream fsIn("me.bin", ios_base::in | ios_base::binary);

	if(fsIn.is_open())
	{
		Human newMe;
		fsIn.read((char*)&newMe, sizeof(newMe));

		cout << "Reading in from me.bin" << endl;
		cout << "Name: " << newMe.name << endl;
		cout << "Age: " << newMe.age << endl;
		cout << "Date of Birth: " << newMe.DOB << endl;
	}

	return 0;
}