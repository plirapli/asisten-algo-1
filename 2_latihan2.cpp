/*Kuis Mencari luas dan keliling lingkaran
Mencari luas permukaan dan volume bola*/
#include <iostream>

// Mendeklarasikan PHI sebagai konstanta dengan nilai 3.14
#define phi 3.14

using namespace std;

main()
{
    // Lingkaran
    // Deklarasi Variabel
    float luas, keliling;
    float jari_jari_lingkaran = 10;

    // Menghitung luas & keliling lingkaran
    luas = phi * jari_jari_lingkaran * jari_jari_lingkaran;
    keliling = phi * 2 * jari_jari_lingkaran;

    // Menampilkan hasil dari perhitungan luas & keliling lingkaran
    cout << "Luas lingkaran: " << luas << endl;
    cout << "Keliling lingkaran: " << keliling << endl
         << endl;

    // Bola
    // Deklarasi Variabel
    float luas_permukaan, volume1, volume2;
    float jari_jari_bola = 5;

    // Menghitung luas permukaan & volume bola
    luas_permukaan = 4 * phi * jari_jari_bola * jari_jari_bola;
    cout << "Luas permukaan bola: " << luas_permukaan << endl;

    // Menampilkan hasil dari perhitungan lp & volume bola
    // Cara 1
    volume1 = 4.0 / 3.0 * phi * jari_jari_bola * jari_jari_bola * jari_jari_bola;

    // Cara 2
    volume2 = 1.3333333 * phi * jari_jari_bola * jari_jari_bola * jari_jari_bola;

    cout << "Volume bola: " << volume1 << endl;
    // cout << "Volume bola (Cara 2): " << volume2;
}
