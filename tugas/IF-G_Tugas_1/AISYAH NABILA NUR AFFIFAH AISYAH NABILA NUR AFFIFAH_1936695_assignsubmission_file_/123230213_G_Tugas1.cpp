#include <iostream>
using namespace std;
 
int main ()
{
  cout << "##  Program C++ Luas Permukaan dan Volume Bola serta Menghitung Luas dan Keliling Lingkaran ##" << endl;
  cout << "==================================================" << endl;
  cout << endl;
 
  float jari2, luas_permukaan, volume, luas, keliling;
 
  cout << "Input jari-jari bola: ";
  cin >> jari2;
  cout << endl;
  
  cout << "Input jari-jari lingkaran: ";
  cin >> jari2;
  cout << endl;
  
  luas_permukaan = (4.0/3.0) * (3.14) * jari2 * jari2 * jari2;
  volume = 4 * (3.14) * jari2 * jari2;
  
  luas = 3.14 * jari2 * jari2;
  keliling = 3.14 * 2 * jari2;
  
  cout << "Luas permukaan bola = " << luas_permukaan << endl;
  cout << "Volume bola = " << volume << endl;
  cout << "Luas lingkaran = "<< luas << endl;
  cout << "Keliling lingkaran = "<< keliling << endl;
  return 0;
}
