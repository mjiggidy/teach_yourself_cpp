#include <iostream>

using namespace std;

int main(){
	int myNumbers[] = {69, 420, -1, 80085};
	
	for(short x = 0; x<4; x++){
		cout << "Index " << x << " is " << myNumbers[x] << endl;
	}

	return 0;
}