#include <iostream>
using namespace std;

main()
{
  // Deklarasi variabel
  char nama[100], nim[10], kelas[10], gender, alamat[100], email[100], hp[100];

  // Form data diri
  cout << "Data Diri" << endl;
  cout << "Nama: ";
  cin.getline(nama, sizeof(nama));

  cout << "NIM: ";
  cin >> nim;

  cout << "Kelas: ";
  cin >> kelas;

  cout << "Jenis Kelamin: ";
  cin >> gender;

  cout << "Alamat: ";
  cin.ignore(); // Biar ga keenter 2x
  cin.getline(alamat, sizeof(alamat));

  cout << "No. HP: ";
  cin >> hp;
}