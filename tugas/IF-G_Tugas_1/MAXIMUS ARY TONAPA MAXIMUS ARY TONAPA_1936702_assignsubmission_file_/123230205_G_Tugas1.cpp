#include <iostream>


using namespace std;

int main() {
   // Konstanta PI
    const float PI = 3.14; 
    
   // Jari-jari lingkaran dan bola
    float jari_jari = 10.0;
     
   // Menghitung luas lingkaran
    float luas_lingkaran = PI * jari_jari * jari_jari;

   // Menghitung keliling lingkaran
    float keliling_lingkaran = 2 * PI * jari_jari;

   // Menghitung luas permukaan bola
   float luas_permukaan_bola = 4 * PI * jari_jari * jari_jari;

   // Menghitung volume bola
    float volume_bola = (4.0 / 3.0) * PI * jari_jari * jari_jari * jari_jari;

   // Menampilkan hasil perhitungan
    cout << "Luas Lingkaran: " << luas_lingkaran << endl;
    cout << "Keliling Lingkaran: " << keliling_lingkaran << endl;
    cout << "Luas Permukaan Bola: " << luas_permukaan_bola << endl;
    cout << "Volume Bola: " << volume_bola << endl;

    return 0;
}
