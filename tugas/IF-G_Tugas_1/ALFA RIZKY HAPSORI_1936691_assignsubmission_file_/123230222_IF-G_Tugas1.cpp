#include <iostream>
#define PHI 3.14

using namespace std;

int main() {
	int r = 10;
	int d = 20;
	
	//Rumus Lingkaran Dan Bola
	float luas = PHI * r * r * r;
	float keliling = PHI * d;
	float luas_bola = 4 * PHI * r * r;
	float volume = 1.3 * PHI * r * r * r;
	
	//Menampilkan Hasil
	cout << "luas lingkaran = " << luas <<endl;
	cout << "keliling bola = " << keliling <<endl;
	cout << "luas permukaan bola = " << luas_bola <<endl;
	cout << "volume bola = " << volume <<endl;
}	
	
