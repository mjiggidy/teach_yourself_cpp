#include <iostream>
#include <exception>

using namespace std;

struct StructA
{
	StructA()
	{
		cout << "StructA: constructor" << endl;
	}
	~StructA()
	{
		cout << "StructA: deconstructor" << endl;
	}
};

struct StructB
{
	StructB()
	{
		cout << "StructB: constructor" << endl;
	}
	~StructB()
	{
		cout << "StructB: deconstructor" << endl;
	}
};

void FuncB()
{
	cout << "FuncB(): wassup makin structs" << endl;
	StructA objA;
	StructB objB;
	cout << "FuncB(): peacin out early" << endl;
	throw "Aight imma head out";
}

void FuncA()
{
	try
	{
		cout << "FuncA()... NOW!" << endl << "FuncA(): So Imma make some strux" << endl;
		StructA objA;
		StructB objB;
		cout << "FuncA(): Goin on to FunkyB" << endl;
		FuncB();
	}
	catch(const char* e)
	{
		cout << "FuncA(): Caught exception: " << e << endl;
		//throw;   // Throw to main
	}	
}

int main()
{
	cout << "main(): Started execution" << endl;
	try
	{
		FuncA();
	}
	catch(const char* e)
	{
		cout << "main(): Got an exception: " << e << endl;
	}
	
	cout << "main(): Exiting nice" << endl;

	return 0;
}