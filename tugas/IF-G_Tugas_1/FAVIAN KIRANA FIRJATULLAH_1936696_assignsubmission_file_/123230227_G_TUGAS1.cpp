#include<iostream>
using namespace std;

int main(){
	
	float L, K, P, V, jarijari;
	jarijari = 10;
	
	//proses perhitungan luas
	L = 3.14 * jarijari * jarijari;
	
	//proses perhitungan keliling
	K = 2 * 3.14 * jarijari;
	
	//proses perhitungan luas permukaan bola
	P = 4 * 3.14 * jarijari * jarijari;
	
	//proses perhitungan volume bola
	V = (4/3) * 3.14 * jarijari * jarijari * jarijari;
	
	//penampilan hasil
	cout<<"Luas lingkaran="<<L<<endl;
	cout<<"Keliling lingkaran="<<K<<endl;
	cout<<"Luas permukaan bola="<<P<<endl;
	cout<<"Volume bola="<<V<<endl;
}
