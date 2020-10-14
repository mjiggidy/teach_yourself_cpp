#include <iostream>
using namespace std;

int main(){

	const int NUM_ROWS = 3;
	const int NUM_COLS = 4;

	int myInts[NUM_ROWS][NUM_COLS] = {
		{3, 14, 32, 84},
		{4, 20, 69, -1},
		{8, 0, 0, 85}
	};

	for(int x=0; x<NUM_ROWS; x++){
		for(int y=0; y<NUM_COLS; y++){
			cout << myInts[x][y] << "   ";
		}
		cout << endl;
	}

	return 0;
}