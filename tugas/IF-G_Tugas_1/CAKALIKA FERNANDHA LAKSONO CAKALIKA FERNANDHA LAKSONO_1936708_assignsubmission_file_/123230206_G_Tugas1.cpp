#include <iostream>
#define PHI = 3.14;
using namespace std;

int main()
{
	// Data lingkaran dan bola
	int jari = 10;
	const float phi = 3.14;
	int diameter = 20;
	const float vol_bola = 1.33;
	// Menghitung dan Hasil Luas dan Keliling lingkaran
	cout << "Luas lingkaran:" << jari * jari * phi << endl;
	cout << "Keliling lingkaran:" << diameter * phi << endl;
	// Menghitung dan Hasil Luas dan Volume bola
	cout << "Luas bola:" << 4 * phi * jari * jari << endl;
	cout << "Volume bola:" << vol_bola * phi * jari * jari * jari << endl;
}
