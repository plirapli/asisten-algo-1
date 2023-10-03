#include <iostream>
using namespace std;

int main()
{
  bool pengamanan = false;
  char ulang, pilih;
  char nip_1[5], nama_pegawai_1[50], nip_2[5], nama_pegawai_2[50], nip_3[5], nama_pegawai_3[50];
  string user, pass;

  cout << "Selamat Datang di Program Sistem Informasi Pegawai, Silahkan Login. \n";
  cout << "Username > ";
  getline(cin, user);
  cout << "Password > ";
  getline(cin, pass);

  if (user == "rafli" && pass == "123210078")
  {
    system("CLS");
    cout << "Selamat Datang, " << user << endl;
    cout << "Silahkan Pilih Menu: \n";
    cout << "[1] Input Data Pegawai \n";
    cout << "[2] Cetak Data Semua Pegawai \n";
    cout << "Pilih > ";
    cin >> pilih;
    cout << endl;

    switch (pilih)
    {
    case '1':
      cout << "Input Data Pegawai:\n";
      cout << "Data Pegawai ke-1: \n";
      cout << "NIP (3 angka) > ";
      cin >> nip_1;
      cout << "Nama Pegawai > ";
      cin.ignore();
      cin.getline(nama_pegawai_1, sizeof(nama_pegawai_1));
      cout << endl;

      cout << "Data Pegawai ke-2: \n";
      cout << "NIP (3 angka) > ";
      cin >> nip_2;
      cout << "Nama Pegawai > ";
      cin.ignore();
      cin.getline(nama_pegawai_2, sizeof(nama_pegawai_2));
      cout << endl;

      cout << "Data Pegawai ke-3: \n";
      cout << "NIP (3 angka) > ";
      cin >> nip_3;
      cout << "Nama Pegawai > ";
      cin.ignore();
      cin.getline(nama_pegawai_3, sizeof(nama_pegawai_3));
      cout << endl;

      pengamanan = true;
      break;

    case '2':
      if (pengamanan)
      {
        cout << "Berikut Laporan Data Semua Pasien: \n";
        cout << "Data Pegawai ke-1: \n";
        cout << "NIP: " << nip_1 << endl;
        cout << "Nama: " << nama_pegawai_1 << endl
             << endl;

        cout << "Data Pegawai ke-2: \n";
        cout << "NIP: " << nip_2 << endl;
        cout << "Nama: " << nama_pegawai_2 << endl
             << endl;

        cout << "Data Pegawai ke-3: \n";
        cout << "NIP: " << nip_3 << endl;
        cout << "Nama: " << nama_pegawai_3 << endl
             << endl;
      }
      else
        cout << "Silakan input data pegawai terlebih dahulu. \n";
      break;

    default:
      cout << "Menu tidak ditemukan. \n";
      break;
    }

    cout << "Tersisa 2 kesempatan lagi untuk kembali ke halaman utama. \n";
    cout << "Apakah anda ingin kembali ke halaman utama? (y/n) > ";
    cin >> ulang;

    if (ulang == 'y' || ulang == 'Y')
    {
      system("cls");
      cout << "Selamat Datang, " << user << endl;
      cout << "Silahkan Pilih Menu: \n";
      cout << "[1] Input Data Pegawai \n";
      cout << "[2] Cetak Data Semua Pegawai \n";
      cout << "Pilih > ";
      cin >> pilih;
      cout << endl;

      switch (pilih)
      {
      case '1':
        cout << "Input Data Pegawai:\n";
        cout << "Data Pegawai ke-1: \n";
        cout << "NIP (3 angka) > ";
        cin >> nip_1;
        cout << "Nama Pegawai > ";
        cin.ignore();
        cin.getline(nama_pegawai_1, sizeof(nama_pegawai_1));
        cout << endl;

        cout << "Data Pegawai ke-2: \n";
        cout << "NIP (3 angka) > ";
        cin >> nip_2;
        cout << "Nama Pegawai > ";
        cin.ignore();
        cin.getline(nama_pegawai_2, sizeof(nama_pegawai_2));
        cout << endl;

        cout << "Data Pegawai ke-3: \n";
        cout << "NIP (3 angka) > ";
        cin >> nip_3;
        cout << "Nama Pegawai > ";
        cin.ignore();
        cin.getline(nama_pegawai_3, sizeof(nama_pegawai_3));
        cout << endl;

        pengamanan = true;
        break;

      case '2':
        if (pengamanan)
        {
          cout << "Berikut Laporan Data Semua Pasien: \n";
          cout << "Data Pegawai ke-1: \n";
          cout << "NIP: " << nip_1 << endl;
          cout << "Nama: " << nama_pegawai_1 << endl
               << endl;

          cout << "Data Pegawai ke-2: \n";
          cout << "NIP: " << nip_2 << endl;
          cout << "Nama: " << nama_pegawai_2 << endl
               << endl;

          cout << "Data Pegawai ke-3: \n";
          cout << "NIP: " << nip_3 << endl;
          cout << "Nama: " << nama_pegawai_3 << endl
               << endl;
        }
        else
          cout << "Silakan input data pegawai terlebih dahulu. \n";
        break;

      default:
        cout << "Menu tidak ditemukan. \n";
        break;
      }

      cout << "Tersisa 1 kesempatan lagi untuk kembali ke halaman utama. \n";
      cout << "Apakah anda ingin kembali ke halaman utama? (y/n) > ";
      cin >> ulang;

      if (ulang == 'y' || ulang == 'Y')
      {
        system("cls");
        cout << "Selamat Datang, " << user << endl;
        cout << "Silahkan Pilih Menu: \n";
        cout << "[1] Input Data Pegawai \n";
        cout << "[2] Cetak Data Semua Pegawai \n";
        cout << "Pilih > ";
        cin >> pilih;
        cout << endl;

        switch (pilih)
        {
        case '1':
          cout << "Input Data Pegawai:\n";
          cout << "Data Pegawai ke-1: \n";
          cout << "NIP (3 angka) > ";
          cin >> nip_1;
          cout << "Nama Pegawai > ";
          cin.ignore();
          cin.getline(nama_pegawai_1, sizeof(nama_pegawai_1));
          cout << endl;

          cout << "Data Pegawai ke-2: \n";
          cout << "NIP (3 angka) > ";
          cin >> nip_2;
          cout << "Nama Pegawai > ";
          cin.ignore();
          cin.getline(nama_pegawai_2, sizeof(nama_pegawai_2));
          cout << endl;

          cout << "Data Pegawai ke-3: \n";
          cout << "NIP (3 angka) > ";
          cin >> nip_3;
          cout << "Nama Pegawai > ";
          cin.ignore();
          cin.getline(nama_pegawai_3, sizeof(nama_pegawai_3));
          cout << endl;

          pengamanan = true;
          break;

        case '2':
          if (pengamanan)
          {
            cout << "Berikut Laporan Data Semua Pasien: \n";
            cout << "Data Pegawai ke-1: \n";
            cout << "NIP: " << nip_1 << endl;
            cout << "Nama: " << nama_pegawai_1 << endl
                 << endl;

            cout << "Data Pegawai ke-2: \n";
            cout << "NIP: " << nip_2 << endl;
            cout << "Nama: " << nama_pegawai_2 << endl
                 << endl;

            cout << "Data Pegawai ke-3: \n";
            cout << "NIP: " << nip_3 << endl;
            cout << "Nama: " << nama_pegawai_3 << endl
                 << endl;
          }
          else
            cout << "Silakan input data pegawai terlebih dahulu. \n";
          break;

        default:
          cout << "Menu tidak ditemukan. \n";
          break;
        }
      }
    }
  }
  else
    cout << "Username dan Password tidak ditemukan. \n";

  cout << "Terima kasih.";
  return 0;
}