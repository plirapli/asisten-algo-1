#include <iostream>
using namespace std;

// Deklarasi fungsi
void menu_utama();     // Fungsi buat nampilin menu utama
void tambah_pesanan(); // Fungsi buat nambah pesanan
void lihat_pesanan();  // Fungsi buat lihat pesanan
void order_menu();

// Variabel buat nyimpen daftar nama barang. Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global variabel)
string daftar_barang[6] = {
    "Kursi",
    "Papan Tulis",
    "Spidol",
    "Meja",
    "Penggaris"};

/*
  Variabel buat nyimpen daftar harga barang. Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
*/
int daftar_harga_barang[6] = {250000, 90000, 3500, 750000, 5250};

/*
  Variabel buat nyimpen jumlah barang yang ada di menu.
  Dalam hal ini, jumlahnya barangnya ada 5, yaitu Kursi, Papan Tulis, Spidol, Meja, dan Penggaris
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
*/
int jumlah_daftar_barang = 5;

/*
  Variabel buat nyimpen daftar nama dari customer yang memesan barang
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
*/
string daftar_nama_customer[100];

/*
  Variabel buat melacak jumlah customer yang telah memesan barang
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
*/
int jumlah_customer = 0;

/*
  Variabel buat nyimpen daftar nomor antrian dari customer yang memesan barang.
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
*/
int daftar_nomor_antrian[100];

/*
  Variabel buat nyimpen daftar jumlah jenis barang yang dipesan oleh semua customer
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
*/
int daftar_jumlah_jenis_barang[100];

/*
  Variabel buat nyimpen daftar jumlah barang yang dipesan oleh semua customer
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
  Variabel ini memiliki tipe data Array 2 Dimensi
  Dimensi pertama untuk menyimpan daftar customernya.
  Sedangkan, dimensi kedua untuk menyimpan jumlah barang dari tiap-tiap customer tadi
*/
int daftar_jumlah_barang[100][500];

int daftar_total_harga_barang[100];

/*
  Variabel buat nyimpen daftar semua pesanan yang dipesan oleh customer beserta barangnya.
  Variabel ini ditaruh di luar supaya bisa diakses di mana saja (Global Variabel)
  Variabel ini memiliki tipe data Array 2 Dimensi
  Dimensi pertama untuk menyimpan daftar customernya.
  Sedangkan, dimensi kedua untuk menyimpan semua pesanan dari tiap-tiap customer tadi
  Kenapa Caps Lock? Sebenarnya bebas, ini buat nandain aja kalo variabel ini buat nyimpen semua pesanan customer
*/
int DAFTAR_SEMUA_PESANAN[100][500];

int main()
{
  string username = "luthfi", password = "123"; // Username dan password yang bener
  string input_username, input_password;        // Buat nampung inputan username dan password
  int percobaan_login = 3;                      // Buat nyimpen percobaan login
  bool cekLogin = false;                        // Buat ngecek login

  do
  {
    // Input username dan password
    cout << "Selamat Datang Di Toko Luthfi, Silakan login terlebih dahulu. \n";
    cout << "Username : ";
    cin >> input_username;
    cout << "Password : ";
    cin >> input_password;

    // Cek login bener apa salah
    if (input_username == username && input_password == input_password)
    {
      cekLogin = true;
    }
    else
    {
      // Kalau password salah, kurangi variabel percobaan login sebanyak 1 dan tampilkan error handling
      percobaan_login--;
      cout << "Username atau Password salah! \n";
      cout << "Kesempatan tersisa : " << percobaan_login << "\n\n";
    }
    // Ulangi terus selama username dan password masih salah dan percobaannya belum 3x
  } while (!cekLogin && percobaan_login > 0);

  if (cekLogin == true)
    menu_utama();
  else
    return 0;
}

void menu_login()
{
}

void menu_utama()
{
  char input_menu;         // Variabel buat nyimpen hasil input menu
  bool ulangi_menu = true; // Variabel buat ngecek apakah menu perlu diulang atau tidak

  do
  {
    system("CLS"); // Menghapus layar bagi yang menggunakan Windows
    // system("CLEAR");  // Bagi yang menggunakan Linux / MacOS

    // Tampilan daftar menu
    cout << "Menu utama Toko Luthfi: \n"
         << "[1] Tambah Pesanan \n"
         << "[2] Lihat Pesanan \n"
         << "[3] Exit \n"
         << "Menu > ";
    cin >> input_menu;
    cout << "\n";

    switch (input_menu)
    {
    // Jika user memilih menu 1, maka masuk ke menu tambah pesanan
    case '1':
      tambah_pesanan();
      break;

    // Jika user memilih menu 2, maka masuk ke menu lihat pesanan
    case '2':
      lihat_pesanan();
      break;

    // Jika user memilih menu 3, maka keluar dari program
    case '3':
      ulangi_menu = false;
      break;

    // Jika user memilih menu selain 1-3, maka tampilkan error handling
    default:
      cout << "Menu tidak tersedia. \n";
      break;
    }

    // Bertanya kepada user apakah perlu kembali ke menu utama atau tidak
    if (ulangi_menu == true)
    {
      char input_kembali;
      cout << "Kembali ke menu utama? (y/n) > ";
      cin >> input_kembali;

      if (input_kembali != 'y')
        ulangi_menu = false;
    }
    // Ulangi menu selama user belum ingin keluar
  } while (ulangi_menu == true);

  cout << "Terima kasih.";
}

void tambah_pesanan()
{
  cout << "Nomor Antrian (1-100) > ";
  cin >> daftar_nomor_antrian[jumlah_customer];
  cin.ignore();

  if (daftar_nomor_antrian[jumlah_customer] > 0 && daftar_nomor_antrian[jumlah_customer] < 101)
  {
    /*
      Kalau sebelumnya udah pernah mesen, dicek dulu antrian yang diinput tadi ada atau engga
      Kalau nomor antriannya tadi gaada, maka panggil fungsi order_menu() buat melanjutkan proses order
      Tapi kalau nomor antrian yang diinput tadi ternyata udah ada, tampilkan error handling berupa tulisan "Antrian sudah ada."
    */
    if (jumlah_customer > 0)
    {
      bool antrian_udah_ada = false;

      // Cek nomor antrian yang diinput tadi
      for (int i = 0; i < jumlah_customer; i++)
      {
        if (daftar_nomor_antrian[i] == daftar_nomor_antrian[jumlah_customer])
          antrian_udah_ada = true;
      }

      if (antrian_udah_ada != true)
        order_menu();
      else
        cout << "Antrian sudah ada! \n";
    }
    /*
      Kalau sebelumnya belum pernah mesen,
      langsung panggil fungsi order_menu() buat melanjutkan proses order
    */
    else
      order_menu();
  }
  else
    cout << "Antrian tidak valid. \n";
}

void order_menu()
{
  system("CLS"); // Menghapus layar bagi yang menggunakan Windows
  // system("CLEAR");  // Bagi yang menggunakan Linux / MacOS

  /*
    Masukkin nama customer, nama customer dimasukkan ke dalam array dengan urutan tergantung jumlah customernya berapa
    Misal, saat ini customer yang telah memesan barang adalah 4.
    Jika ada orderan baru lagi, maka nama customer yang baru tadi akan disimpan ke dalam variabel nama_customer[4].
    Artinya, nama tadi akan disimpan ke dalam array nama_customer dengan index ke-4 (urutan ke-5, karena index dimulai dari 0)
  */
  cout << "Nama Customer > ";
  getline(cin, daftar_nama_customer[jumlah_customer]);

  // Tampilin daftar barang beserta harganya
  cout << "Daftar Barang: \n";
  for (int i = 0; i < jumlah_daftar_barang; i++)
  {
    cout << "[" << i + 1 << "] "
         << daftar_barang[i] << " = "
         << "Rp" << daftar_harga_barang[i]
         << "\n";
  }

  // Input jumlah pesanan
  cout << "Jumlah jenis barang yang mau dipesan > ";
  cin >> daftar_jumlah_jenis_barang[jumlah_customer];
  cout << "\n";

  /*
    Lakukan perulangan sebanyak jumlah orderan.
    Jadi, kalau jumlah jenis barang yang dimasukkan tadi ada 3, maka lakukan perulangan sebanyak 3x
  */
  for (int i = 0; i < daftar_jumlah_jenis_barang[jumlah_customer]; i++)
  {
    int input_nomor_barang;  // Variabel buat nyimpen hasil input nomor barang
    bool cek_barang = false; // Variabel buat ngecek barang yang diinput ada atau engga, bernilai 0 kalo barang gaada

    do
    {
      /*
        Memasukkan nomor barang yang mau dipesan.
        Misalkan user ingin memesan penggaris, maka user perlu memasukkan nomor 5.
      */
      cout << "Orderan ke-" << i + 1 << "\n";
      cout << "Masukkan nomor barang yang mau dipesan > ";
      cin >> input_nomor_barang;

      // Ngecek apakah nomor barang yang diinput ada di daftar barang
      for (int nomor_barang = 1; nomor_barang <= jumlah_daftar_barang; nomor_barang++)
      {
        // Kalau barang ada, maka masukkan ke dalam daftar semua pesanan
        if (input_nomor_barang == nomor_barang)
        {
          cek_barang = true;
          DAFTAR_SEMUA_PESANAN[jumlah_customer][i] = nomor_barang - 1;
        }
      }

      // Kalo barang gada, tampilkan error handling
      if (cek_barang == false)
        cout << "Barang tidak ditemukan! \n\n";

    } while (cek_barang == false);

    // Kalo barang ada, maka lanjutkan pemesanan
    if (cek_barang == true)
    {
      int nomor_barang_dipilih;  // Variabel untuk menyimpan nomor barang yang dipilih
      int subtotal_harga_barang; // Variabel untuk menyimpan hasil perhitungan harga barang dengan jumlah yang dipesan

      nomor_barang_dipilih = DAFTAR_SEMUA_PESANAN[jumlah_customer][i];

      // Tampilkan menu yang dipilih, kemudian masukkan jumlah barang dari menu yang dipilih
      cout << "Menu dipilih: " << daftar_barang[nomor_barang_dipilih] << "\n";
      cout << "Masukkan jumlah barang > ";
      cin >> daftar_jumlah_barang[jumlah_customer][i];

      // Subtotal merupakan harga barang dikali dengan jumlah yang dipesan
      subtotal_harga_barang = daftar_harga_barang[nomor_barang_dipilih] * daftar_jumlah_barang[jumlah_customer][i];
      cout << "Subtotal : Rp" << subtotal_harga_barang << "\n\n";

      // Akumulasikan subtotal harga barang tadi ke dalam daftar total harga barang
      daftar_total_harga_barang[jumlah_customer] += subtotal_harga_barang;
    }
  }

  cout << "Total Pesanan: Rp" << daftar_total_harga_barang[jumlah_customer] << "\n\n";

  // Tambahkan jumlah customer sebanyak 1
  jumlah_customer++;
}

void lihat_pesanan()
{
  int nomor_barang;

  // Cek apakah sudah ada pesanan atau belum. Kalau udah, tampilin. Kalau belum, tampilin error handling
  if (jumlah_customer > 0)
  {
    for (int i = 0; i < jumlah_customer; i++)
    {
      cout << i + 1 << ". Antrian ke-" << daftar_nomor_antrian[i] << "\n";
      cout << "Nama Customer: " << daftar_nama_customer[i] << "\n";
      cout << "Daftar barang yang dipesan: \n";

      // Lakukan looping untuk menampilkan daftar barang yang dipesan
      for (int index_barang = 0; index_barang < daftar_jumlah_jenis_barang[i]; index_barang++)
      {
        nomor_barang = DAFTAR_SEMUA_PESANAN[i][index_barang];
        cout << "- " << daftar_barang[nomor_barang] << " (" << daftar_jumlah_barang[i][index_barang] << "x) \n";
      }
      cout << "Total Harga: Rp" << daftar_total_harga_barang[i]; // Tampilin total harganya
      cout << "\n\n";
    }
  }
  else
    cout << "Belum ada pesanan. \n";
}