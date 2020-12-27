#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<4> fourBits;
	cout << "Initial contents of fortBits: " << fourBits << endl;

	bitset<5> fiveBits("10101");
	cout << "Initial contents of fiveBits: " << fiveBits << endl;

	bitset<6> sixBits(0b101001);
	cout << "Initial contents of sixBits: " << sixBits << endl;

	bitset<8> eightBits(255);
	cout << "Initial contents of eightBits: " << eightBits << endl;

	return 0;
}