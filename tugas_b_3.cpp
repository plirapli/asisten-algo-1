#include <iostream>
using namespace std;

// Deklarasi variabel global
int choice;
int stok = 0;

// Deklarasi fungsi
bool cek_login(string username, string password); // Fungsi untuk memvalidasi username dan password
void tampilkan_menu();                            // Fungsi untuk menampilkan menu
void proses_login();                              // Fungsi untuk menginput username dan password

main()
{
  cout << "Selamat Datang, Silahkan Login Terlebih Dahulu \n";

  // Memanggil fungsi proses_login() untuk melakukan login terlebih dahulu
  proses_login();

  // Memanggil fungsi tampilkan_menu(), Fungsi ini baru akan berjalan ketika perulangan di fungsi proses_login() telah berhenti
  tampilkan_menu();
}

bool cek_login(string username, string password)
{
  return username == "dejan" && password == "124220138";
}

void tampilkan_menu()
{
  bool ulangi = 1; // Variabel untuk mengecek apakah menu perlu diulangi atau tidak
  cout << "Selamat Datang, Silahkan Pilih Menu:" << endl;

  do
  {
    cout << "Pilihan Menu:\n";
    cout << "[1] Lihat Stok Barang\n";
    cout << "[2] Tambah Stok Barang\n";
    cout << "[3] Kurangi Stok Barang\n";
    cout << "[Lainnya] Keluar \n";
    cout << "Pilih operasi (1-3): ";
    cin >> choice;

    switch (choice)
    {
    case 1: // Menampilkan stok barang
      cout << "Stok Barang Saat Ini: " << stok << endl;
      cout << endl;
      break;

    case 2: // Menambah stok barang
      float depositAmount;

      cout << "Masukkan jumlah barang baru: ";
      cin >> depositAmount;

      stok += depositAmount; // menambah stok barang
      cout << "Stok barang berhasil ditambah." << endl
           << endl;
      break;

    case 3: // Mengurangi stok barang
      float amount;

      cout << "Masukkan jumlah barang keluar: ";
      cin >> amount;

      // Mengecek apakah stok barang melebihi jumlah barang yang akan dikeluarkan
      if (amount <= stok)
      {
        stok -= amount; // mengurangi stok barang
        cout << "Stok barang berhasil dikurangi." << endl;
      }
      else
      {
        // Error handling ketika stok barang melebihi jumlah barang yang akan dikeluarkan
        cout << "Error stok barang kurang" << endl;
      }
      cout << endl;
      break;

    default:
      ulangi = 0; // Keluar dari perulangan
      cout << "Terima kasih." << endl;
    }

  } while (ulangi);
}

void proses_login()
{
  string user, pass;
  do
  {
    cout << "Masukkan Username: ";
    getline(cin, user);

    cout << "Masukkan Password: ";
    getline(cin, pass);

    /*
      Mengecek apakah login berhasil atau tidak.
      Jika username dan password benar, keluar dari perulangan.
      Jika salah, maka tampilkan tulisan "Username dan Password Salah Silahkan Coba lagi!" dan ulangi
    */
    if (!cek_login(user, pass))
      cout << "Username dan Password Salah Silahkan Coba lagi!" << endl;
    cout << endl;
  } while (!cek_login(user, pass));
}
