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
