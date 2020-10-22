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
			if(initString != NULL)
			{
				buffer = new char[strlen(initString) + 1];
				strcpy(buffer, initString);
			}
			else
				buffer = NULL;
		}

		~MyString()
		{
			cout << "Cleanin' 'er up" << endl;
			if(buffer != NULL)
				delete[] buffer;
		}

		int GetLength()
		{
			return strlen(buffer);
		}

		const char* GetString()
		{
			return buffer;
		}
};

int main()
{
	MyString* sayHello = new MyString("Wassup there?");
	cout << "That string, " << sayHello->GetString() << ", was " << sayHello->GetLength() << " characters long." << endl;
	delete sayHello;
	return 0;
}