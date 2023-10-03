#include <iostream>

using namespace std;
int main()
{
	float luaslingkaran, luaspermukaan, keliling, diameter, volume;
	const float phi = 3.14;
	int jari = 10;
	diameter = jari * 2;
	
	luaslingkaran = phi * jari * jari;
	luaspermukaan = phi * 4 * jari * jari;
	keliling = phi * diameter;
	volume = 4 * phi * jari * jari * jari / 3;
	
	cout << "Luas Lingkaran : " << luaslingkaran << endl;
	cout << "Luas Permukaan : " << luaspermukaan << endl;
	cout << "Keliling : " << keliling << endl;
	cout << "Volume Bola : " << volume << endl;
	
	
}
