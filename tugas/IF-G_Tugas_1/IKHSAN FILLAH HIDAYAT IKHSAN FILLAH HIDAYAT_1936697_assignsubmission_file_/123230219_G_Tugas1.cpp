#include <iostream>
#define PHI 3.14
using namespace std;

int main() {
	int r = 10; 
	int d = 20;
	
	float luas_lingkaran = PHI * r * r;
	float keliling_lingkaran = PHI * d;
	float luas_bola = 4 * PHI * r * r;
	float volume_bola = 1.3 * PHI * r * r * r;

	cout << "luas lingkaran = " << luas_lingkaran <<endl;
	cout << "keliling lingkaran = " << keliling_lingkaran <<endl;
	cout << "luas permukaan bola = " <<luas_bola <<endl;
	cout << "volume bola = " <<volume_bola <<endl;

}
