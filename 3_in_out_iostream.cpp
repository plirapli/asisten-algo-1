#include <iostream>
using namespace std;

int main()
{
  char kalimat1[100], kalimat2[100];

  cout << "Masukkan kalimat tanpa spasi: ";
  cin >> kalimat1;

  cout << "Masukkan kalimat: ";
  cin.ignore(); // Untuk mengabaikan enter pada cin baris 9
  cin.getline(kalimat2, sizeof(kalimat2));

  cout << "Kalimat = " << kalimat1 << endl;
  cout << "Kalimat = " << kalimat2;
}