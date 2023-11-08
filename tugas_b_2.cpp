#include <iostream>
using namespace std;

main()
{
  // Deklrasi variabel
  char ulangi;
  string username, password;

  do
  {
    // Input username dan password, terserah mau pake cin atau getline
    cout << "Masukkan username: ";
    cin >> username;

    cout << "Masukkan password: ";
    cin >> password;
  } while (username != "dejan" && password != "12345678");

  do
  {
    // Variabel jumlah digunakan untuk menampung jumlah bilangan ganjil
    int jumlah = 0;

    // Menghapus layar, kalo di Linux atau MacOS bisa menggunakan system("CLEAR")
    // Bebas mau pake atau engga, ini biar rapi aja
    system("CLS");

    cout << "Daftar bilangan ganjil dari 10 s/d 150:" << endl;
    /*
      Melakukan perulangan dari angka 10 s/d 149
      (150 tidak termasuk, tapi kalo mau dimasukkan juga gapapa)
    */
    for (int i = 10; i < 150; i++)
    {
      /*
        Melakukan pengecekan apakah angka termasuk bilangan ganjil atau bukan.
        Bilangan ganjil merupakan bilangan yang kalau dibagi 2, hasil baginya tersisa 1
        Kita bisa memanfaatkan operator Modulo (%) untuk melakukan itu
      */
      if (i % 2 == 1)
      {
        // Menampilkan bilangan yang ganjil
        cout << i << " ";

        // Jika angka merupakan bilangan ganjil, maka tambahkan 1 ke dalam variabel jumlah
        jumlah++;
      }
    }
    cout << "\n\n"; // Buat ganti baris doang
    cout << "Banyaknya bilangan ganjil dari 10 s/d 150 adalah " << jumlah;
    cout << "\n\n"; // Buat ganti baris doang

    cout << "Ulangi program? (y/n) > ";
    cin >> ulangi;
  } while (ulangi == 'y');

  // Keluar dari program jika ulangi != 'y'
  cout << "Terima kasih";
}
