#include <iostream>
#include <bitset>
using namespace std;

int main(){
	unsigned short inputNum = 0;
	cout << "Enter a number (0 - 255): ";
	cin >> inputNum;

	bitset<8> inputBits(inputNum);
	bitset<8> mask(0x0F);
	cout << inputNum << " in binary is " << inputBits << endl;

	cout << "Logical NOT ~" << endl;
	cout << "~" << inputBits << " = " << ~inputBits << " (" << ~inputBits.to_ulong() << ")" << endl;

	cout << "Logical AND & with 00001111" << endl;
	cout << mask << " & " << inputBits << " = " << bitset<8>(mask & inputBits) << " (" << bitset<8>(mask & inputBits).to_ulong() << ")" << endl;

	cout << "Logical OR | with 00001111" << endl;
	cout << mask << " | " << inputBits << " = " << bitset<8>(mask | inputBits) << " (" << bitset<8>(mask | inputBits).to_ulong() << ")" << endl;

	cout << "Logical XOR ^ with 00001111" << endl;
	cout << mask << " ^ " << inputBits << " = " << bitset<8>(mask ^ inputBits) << " (" << bitset<8>(mask ^ inputBits).to_ulong() << ")" << endl;

	return 0;
}