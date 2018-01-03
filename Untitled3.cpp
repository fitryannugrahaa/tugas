#include <iostream>
#include <cmath>
using namespace std;

void tampilMatrix3x5(double array[3][5]) {
	for(int x=0; x<3; x++) {
		cout << array[x][0];
		for(int y=1; y<5; y++) {
			cout << " | " << array[x][y];
		} cout << endl;
	} cout << endl;
}

int main(){
	// DEKLARASI VARIABEL, ARRAY DAN ISI DATA
	int x,y;
	double 	arrayM[5],
			arrayH[3],
			matrixR[3][5],
			matrixRxW[3][5],
			arrayW[5] = {5,3,4,4,2},
			array[3][5] = {
					{4,4,5,3,3},
					{3,3,4,2,3},
					{5,4,2,2,2}
			};

