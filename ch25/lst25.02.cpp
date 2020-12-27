#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<8> inputBits;
	cout << "Enter an 8-bit sequence.  Don't get sassy: ";
	cin >> inputBits;

	cout << "You supplied " << inputBits.count() << " 1s" << endl;
	cout << "You supplied " << inputBits.size() - inputBits.count() << " 0s" << endl;
	
	bitset<8> inputFlipped(inputBits);
	inputFlipped.flip();
	cout << "Now I flipped 'em: " << inputFlipped << endl;

	cout << "Bitwise & between the two: " << (inputBits&inputFlipped) << endl;

	return 0;
}