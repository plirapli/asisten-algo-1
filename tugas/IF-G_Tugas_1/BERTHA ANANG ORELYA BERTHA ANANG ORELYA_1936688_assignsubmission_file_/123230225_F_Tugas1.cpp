#include <iostream> 
using namespace std; 

main ()
{
	float luas, keliling;
	float jari_jari = 10;
	
	luas = 3.14 * 10 * 10;
	keliling = 3.14 * 2 * 10;
	
	cout << "Luas lingkaran: " << luas << endl;
	cout << "Keliling lingkaran: " << keliling;


	float luaspermukaan, volume;
	
	luaspermukaan = 4 * 3.14 * 10 * 10;
	volume = ( 4.0/3.0 )* 3.14 * 10 * 10 * 10;
	
	cout << "Luaspermukaan bola: " << luaspermukaan << endl;
	cout << "Volume bola " << volume;
}
