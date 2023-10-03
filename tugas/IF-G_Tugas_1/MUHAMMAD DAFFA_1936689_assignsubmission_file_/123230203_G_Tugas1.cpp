#include <iostream>
using namespace std;

int main()
{
	// Data lingkaran dan bola
	int jari = 10;
	const float phi = 3.14;
	int diameter = 20;
	const float kel_bola = 1.33;
	// Hasil Luas dan Keliling lingkaran
	cout << "Luas Lingkaran:" << jari * jari * phi << endl;
	cout << "Keliling Lingkaran:" << diameter * phi << endl;
	// Hasil Luas dan Volume Bola
	cout << "Luas Bola:" << 4 * phi * jari * jari << endl;
	cout << "Volume Bola:" << kel_bola * phi * jari * jari * jari << endl;
}
