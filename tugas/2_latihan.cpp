#include <iostream>
#define PHI 3.14
using namespace std;

int main() {
	int r = 10;
	int d = 20;
	
	float luas = PHI * r * r;
	float keliling = PHI * d;
	float luas_bola = 4 * PHI * r * r;
	float volume = 1.3 * PHI * r * r * r;
	
	cout << "luas lingkaran = " <<luas <<endl;
	cout << "keliling lingkaran = " <<keliling <<endl;
	cout << "luas permukaan bola = " <<luas_bola <<endl;
	cout << "volume bola = " <<volume <<endl;
}
