#include <iostream>

using namespace std;

int main() {

	int sayac = 0;
	int birler, onlar, y�zler, binler;
	for (int i = 1000; i <= 9999; i++) {
		birler = i % 10;
		onlar = (i / 10) % 10;
		y�zler = (i / 100) % 10;
		binler = i / 1000;

		if (birler != onlar && birler != y�zler && birler != binler 
			&& onlar != y�zler && onlar != binler && y�zler != binler) {
			sayac = sayac + 1;
		}

	}


	cout << sayac ;
	cout << endl ;
	return 0;
}