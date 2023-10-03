#include <iostream> 
#define PHI 3.14
using namespace std;

int main() {
	
	// Rumus Lingkaran dan Bola
	int jari = 10;
	const float bola = 1.334;
	int diameter = 20;
	
	// Luas dan Keliling Lingkaran
	cout << "Luas Lingkaran:" << PHI * jari * jari << endl;
	cout << "Keliling Lingkaran:" << diameter * PHI << endl;
	
	// Luas dan Volume Bola
	cout << "Luas Bola:" << 4 * PHI * jari * jari << endl;
	cout << "Volume Bola:" << bola * PHI * jari * jari *jari << endl;
	
}
