#include <iostream>

using namespace std;

int main() {

	int sayac = 0;
	int birler, onlar, yüzler, binler;
	for (int i = 1000; i <= 9999; i++) {
		birler = i % 10;
		onlar = (i / 10) % 10;
		yüzler = (i / 100) % 10;
		binler = i / 1000;

		if (birler != onlar && birler != yüzler && birler != binler 
			&& onlar != yüzler && onlar != binler && yüzler != binler) {
			sayac = sayac + 1;
		}

	}


	cout << sayac ;
	cout << endl ;
	return 0;
}