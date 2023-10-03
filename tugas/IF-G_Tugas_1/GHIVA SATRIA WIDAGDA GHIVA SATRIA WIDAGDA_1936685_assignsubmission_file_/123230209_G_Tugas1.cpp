#include <iostream>

using namespace std;
int main()
{
	float luasl, luasb, keliling, diameter,volume;
	const float phi = 3.14159265359;
	int r = 10;
	diameter = r * 2;
	
	luasl = phi * r * r;
	keliling = phi * diameter;
	luasb = phi * 4 * r * r;
	volume = 4 * phi * r * r * r / 3;
	
	cout << "Luas Lingkaran : " << luasl << endl;
	cout << "Keliling Lingkaran : " << keliling << endl;
	cout << "Luas Permukaan Bola : " << luasb << endl;
	cout << "Volume Bola : " << volume << endl;
	
	return 0;
}	
