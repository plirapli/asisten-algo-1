#include <iostream>

using namespace std;

int main ()
{	
    // data luas  , keliling , luas permukaan bola , volume 
	int r, luas, kel, luper, volu; //tipe data beserta variabel
	r = 10; //jari-jari 
	float phi = 3.14; //nilai phi
	luas = phi * r * r; //rumus luas ling
	kel = 2 * phi * r; //rumus keliling ling
	luper = 4 * phi * r * r; //luas permukaan bol
	volu = 4/3 * phi * r * r * r; //volu bol
	cout << "=======TUGAS 2========" << endl;
	cout << "Luas Lingkaran      : " << luas << endl;
	cout << "Keliling Lingkaran  : " << kel << endl;
	cout << "Luas Permukaan Bola : " << luper << endl;
	cout << "Volume Bola         : " << volu << endl;
}

