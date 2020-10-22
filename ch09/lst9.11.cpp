#include <iostream>
using namespace std;

class MyClass
{
	private:
		~MyClass()
		{
			cout << "Destroyed" << endl;
		};	// prevent allocation on the stack
	
	public:
		MyClass()
		{
			cout << "Created" << endl;
		}

		static void DestroyObject(MyClass* instance)
		{
			cout << "Destroying..." << endl;
			delete instance;
		}

};

int main()
{
	// MyClass test = MyClass();
	MyClass* object = new MyClass();
	MyClass::DestroyObject(object);

	return 0;
}