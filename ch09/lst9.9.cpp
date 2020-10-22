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
			cout << "Entirely new MyString object" << endl;
			buffer = NULL;
			if(initString != NULL)
			{
				buffer = new char[strlen(initString) + 1];
				strcpy(buffer, initString);
			}
		}

		MyString(const MyString& copySource)
		{
			cout << "Deep copy fo ya boi" << endl;
			buffer = NULL;
			if(copySource.buffer != NULL)
			{
				buffer = new char[strlen(copySource.buffer) + 1];
				strcpy(buffer, copySource.buffer);
				cout << "Buffer copied to 0x" << hex << (unsigned int*)buffer << endl;
			}
			
		}

		~MyString()
		{
			cout << "Invoking destructor at location 0x" << hex << (unsigned int*)buffer << endl;
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
	cout << "String " << str.GetString() << " is " << dec << str.GetLength() << " characters long." << endl;
	return;
}

int main()
{
	MyString sayHello("Ssssup grrrrl?");
	UseMyString(sayHello);

	return 0;
}