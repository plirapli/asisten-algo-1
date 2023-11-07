/*Kuis Mencari luas dan keliling lingkaran
Mencari luas permukaan dan volume bola*/
#include <iostream>

// Mendeklarasikan PHI sebagai konstanta dengan nilai 3.14
#define phi 3.14

using namespace std;

main()
{
    // Deklarasi Variabel
    float jari_jari = 10;

    // Deklarasi Variabel untuk menghitung Lingkaran
    float luas, keliling;

    // Deklarasi Variabel untuk menghitung Bola
    float luas_permukaan, volume1, volume2;

    // Menghitung luas lingkaran
    luas = phi * jari_jari * jari_jari;

    // Menghitung keliling lingkaran
    keliling = phi * 2 * jari_jari;

    // Menghitung luas permukaan
    luas_permukaan = 4 * phi * jari_jari * jari_jari;

    // Cara 1 menghitung volume bola
    volume1 = 4.0 / 3.0 * phi * jari_jari * jari_jari * jari_jari;

    // Cara 2 menghitung volume bola
    volume2 = 1.3333333 * phi * jari_jari * jari_jari * jari_jari;

    // Menampilkan hasil dari luas & keliling lingkaran
    cout << "Luas lingkaran: " << luas << "\n";
    cout << "Keliling lingkaran: " << keliling << "\n\n";

    // Menampilkan hasil dari luas permukaan dan volume bola
    cout << "Luas permukaan bola: " << luas_permukaan << "\n";
    cout << "Volume bola: " << volume1 << "\n";
    cout << "Volume bola (Cara 2): " << volume2;
}
