#include <iostream>
using namespace std;

int main(){

	const short ARRAY_ROWS = 8;
	const short ARRAY_COLS = 8;

	int threeRowsThreeColumns[ARRAY_ROWS][ARRAY_COLS] = {
		{-501, 205, 2016},
		{989, 101, 405},
		{303, 456, 595}
	};

	for(short x=0; x<ARRAY_ROWS; x++){
		cout << "Row " << x << ":";
		for(short y=0; y<ARRAY_COLS; y++)
			cout << '\t' << threeRowsThreeColumns[x][y];
		cout << endl;
	}

	return 0;
}