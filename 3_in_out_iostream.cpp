#include <iostream>
using namespace std;

int main()
{
  char kalimat1[100], kalimat2[100];
  string kalimat3;

  cout << "Masukkan kalimat tanpa spasi: ";
  cin >> kalimat1;

  cout << "Masukkan kalimat 1: ";
  cin.ignore(); // Untuk mengabaikan enter pada cin baris 9
  cin.getline(kalimat2, 6);

  cout << "Masukkan kalimat 2: ";
  getline(cin, kalimat3);

  cout << "Kalimat = " << kalimat1 << endl;
  cout << "Kalimat = " << kalimat2 << endl;
  cout << "Kalimat = " << kalimat3 << endl;
}