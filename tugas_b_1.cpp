#include <iostream>
#include <iomanip> // Library iomanip hanya digunakan untuk memanggil fungsi setfill dan setw (Hanya untuk mempercantik tampilan)
using namespace std;

int main()
{
  // Deklarasi variabel
  string user, pass, jabatan; // Dapat menggunakan string atau char[]
  int tahun_kerja, bonus;

  // Hanya untuk mempercantik tampilan
  cout << setfill('=');
  cout << setw(50) << "=" << endl;
  cout << "||";
  cout << setfill(' ') << setw(48) << "||" << endl;
  cout << "||";
  cout << setfill(' ') << setw(48) << "||" << endl;
  cout << "||"
       << " \tSelamat Datang, Silahkan Login";
  cout << setfill(' ') << setw(12) << "||" << endl;
  cout << "||";
  cout << setfill(' ') << setw(48) << "||" << endl;
  cout << "||";
  cout << setfill(' ') << setw(48) << "||" << endl;
  cout << setfill('=') << setw(50) << "=";
  cout << endl;

  // Input username dan password
  cout << "Username \t: ";
  getline(cin, user);
  cout << "Password \t: ";
  getline(cin, pass);

  // Mengecek apakah username dan password valid atau tidak
  if (user == "dejan azul" && pass == "dejanazul")
  {
    int pilih;

    system("CLS"); // Menghapus tampilan, pada OS LINUX atau MacOS bisa menggunakan system("CLEAR")

    // Hanya untuk mempercantik tampilan
    cout << setfill('=');
    cout << setw(50) << "=" << endl;
    cout << "||";
    cout << setfill(' ') << setw(48) << "||" << endl;
    cout << "||";
    cout << setfill(' ') << setw(48) << "||" << endl;
    cout << "||"
         << "\tSelamat Datang, " << user;
    cout << setfill(' ') << setw(16) << "||" << endl;
    cout << "||"
         << "\t   Silahkan Pilih Menu!";
    cout << setfill(' ') << setw(19) << "||" << endl;
    cout << "||";
    cout << setfill(' ') << setw(48) << "||" << endl;
    cout << setfill('=') << setw(50) << "=";
    cout << endl;

    // Menampilkan daftar jabatan yang bisa dipilih
    cout << "Berikut Jabatan yang Dapat Dipilih:" << endl;
    cout << "- Karyawan" << endl;
    cout << "- Manajer" << endl;
    cout << "- CEO" << endl;
    cout << "Masukkan Jabatan anda: ";

    getline(cin, jabatan);

    /*
      Mengecek jabatan yang diinput user.
      Jika user mengetik "Karyawan", maka masuk ke percabangan karyawan.
      Jika user mengetik "Manajer", maka masuk ke percabangan manajer.
      Jika user mengetik "CEO", maka masuk ke percabangan CEO.
      Jika user mengetikkan selain ketiga jabatan di atas,
      maka tampilkan tulisan "Jabatan tidak ditemukan, keluar dari program" dan keluar dari program
    */
    if (jabatan == "Karyawan")
    {
      cout << "Masukkan lama tahun kerja: ";
      cin >> tahun_kerja;

      /*
        Mengecek tahun kerja yang diinput user.
        Jika seorang karyawan telah bekerja selama 1-4 tahun, maka bonusnya adalah 1 juta dikali tahun kerja
        Jika seorang karyawan telah bekerja selama 5-15 tahun, maka bonusnya adalah 1,5 juta dikali tahun kerja
        Jika seorang karyawan telah bekerja selama lebih dari 15 tahun, maka bonusnya adalah 2 juta dikali tahun kerja
      */
      if (tahun_kerja > 0 && tahun_kerja < 5)
      {
        bonus = 1000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
        cout << endl;
      }
      else if (tahun_kerja >= 5 && tahun_kerja <= 15)
      {
        bonus = 1250000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
        cout << endl;
      }
      else if (tahun_kerja > 15)
      {
        bonus = 1500000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
        cout << endl;
      }
      else
      {
        // Error handling ketika user menginputkan tahun kerja kurang dari 1
        cout << "Tahun kerja tidak valid!";
      }
    }
    else if (jabatan == "Manajer")
    {
      cout << "Masukkan lama tahun kerja: ";
      cin >> tahun_kerja;

      /*
        Mengecek tahun kerja yang diinput user.
        Jika seorang manajer telah bekerja selama 1-4 tahun, maka bonusnya adalah 2 juta dikali tahun kerja
        Jika seorang manajer telah bekerja selama 5-15 tahun, maka bonusnya adalah 3 juta dikali tahun kerja
        Jika seorang manajer telah bekerja selama lebih dari 15 tahun, maka bonusnya adalah 4 juta dikali tahun kerja
      */
      if (tahun_kerja > 0 && tahun_kerja < 5)
      {
        bonus = 2000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
      }
      else if (tahun_kerja >= 5 && tahun_kerja <= 15)
      {
        bonus = 3000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
      }
      else if (tahun_kerja > 15)
      {
        bonus = 4000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
      }
      else
      {
        // Error handling ketika user menginputkan tahun kerja kurang dari 1
        cout << "Tahun kerja tidak valid!";
      }
    }
    else if (jabatan == "CEO")
    {
      cout << "Masukkan lama tahun kerja: ";
      cin >> tahun_kerja;

      /*
        Mengecek tahun kerja yang diinput user.
        Jika seorang CEO telah bekerja selama 1-4 tahun, maka bonusnya adalah 5 juta dikali tahun kerja
        Jika seorang CEO telah bekerja selama 5-15 tahun, maka bonusnya adalah 6 juta dikali tahun kerja
        Jika seorang CEO telah bekerja selama lebih dari 15 tahun, maka bonusnya adalah 7 juta dikali tahun kerja
      */
      if (tahun_kerja > 0 && tahun_kerja < 5)
      {
        bonus = 5000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
      }
      else if (tahun_kerja >= 5 && tahun_kerja <= 15)
      {
        bonus = 6000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
      }
      else if (tahun_kerja > 15)
      {
        bonus = 7000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
      }
      else
      {
        // Error handling ketika user menginputkan tahun kerja kurang dari 1
        cout << "Tahun kerja tidak valid!";
      }
    }
    else
      cout << "Jabatan tidak ditemukan, keluar dari program" << endl;
  }
  return 0;
}