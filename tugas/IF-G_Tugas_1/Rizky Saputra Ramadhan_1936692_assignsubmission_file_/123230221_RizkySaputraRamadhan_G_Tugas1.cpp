#include <iostream>
#define PHI 3.14
using namespace std;
int main()
{
	// Deklarasi Variabel
	const double r = 10;
	float luas, keliling, lpBola, volumeBola;
	// menghitung luas dan keliling Lingkaran
	luas = PHI * r * r;
	keliling = PHI * 2 * r;
	lpBola = 4 * PHI * r * r;
	volumeBola = 4.0 / 3.0 * PHI * r * r * r;
	cout << "Luas Lingkaran :" << luas << endl;
	cout << "Keliling Lingkaran:" << keliling << endl;
	cout << "Luas Permukaan Bola :" << lpBola << endl;
	cout << "Volume Bola :" << volumeBola << endl;
	return 0;
}
