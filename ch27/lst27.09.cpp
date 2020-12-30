#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ifstream myFile;
	myFile.open("hello.txt", ios_base::in);

	if(myFile.is_open())
	{
		cout << "We sure opened that file.  It contains:" << endl << endl;
		string fileContents;

		while(myFile.good())
		{
			getline(myFile, fileContents);
			cout << fileContents << endl;
		}

		cout << "I am done with this.  Close it." << endl;
		myFile.close();
	}

	else
	{
		cout << "open() failed: You did something wrong, not me." << endl;
	}
	

	return 0;
}