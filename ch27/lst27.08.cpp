#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream myFile;
	myFile.open("hello.txt", ios_base::out);

	if(myFile.is_open())
	{
		cout << "File open successful" << endl;
		
		myFile << "My first text file, I swear!" << endl;
		myFile << "Hellophile!" << endl;

		cout << "Finished writing to file, will close now good bye ok" << endl;
		myFile.close();
	}

	return 0;
}