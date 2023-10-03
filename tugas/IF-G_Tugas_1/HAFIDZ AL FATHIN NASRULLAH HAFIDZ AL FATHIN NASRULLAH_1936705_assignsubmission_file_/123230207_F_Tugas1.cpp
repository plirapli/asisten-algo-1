#include <iostream>

using namespace std;

int main ()
{
	const float phi = 3.14;
	const float P = 1.3333;
	const int Q = 4;
	int jari = 10;
	int diameter = 20;
	
	float luas_ling = phi * jari * jari;   
	float keliling_ling = phi * diameter;
	float volume = P * phi * jari * jari * jari;
	float luas_pbola = Q * phi * jari * jari;
	
	//menghitung luas & keliling lingkaran
	cout << "Luas Lingkaran: " << luas_ling << endl;
	cout << "Keliling Lingkaran: " << keliling_ling << endl;
	
	//menghitung volume & luas permukaan bola
	cout << "Volume Bola: " << volume << endl;
	cout << "Luas Permukaan Bola: " << luas_pbola << endl;
	
	return 0;
	
}
