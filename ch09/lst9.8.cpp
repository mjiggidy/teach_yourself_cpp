#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
	private:
		char* buffer;
	
	public:
		MyString(const char* initString)
		{
			buffer = NULL;
			if(initString != NULL)
			{
				buffer = new char[strlen(initString) + 1];
				strcpy(buffer, initString);
			}
		}

		~MyString()
		{
			cout << "Invoking destructor" << endl;
			delete[] buffer;
		}

		int GetLength()
		{
			return strlen(buffer);
		}

		const char* const GetString()
		{
			return buffer;
		}
};

void UseMyString(MyString str)
{
	cout << "String " << str.GetString() << " is " << str.GetLength() << " characters long." << endl;
	return;
}

int main()
{
	MyString sayHello("Ssssup grrrrl?");
	UseMyString(sayHello);

	return 0;
}