#include <iostream>
#include <iomanip>
using namespace std;

string user, pass, jabatan;
int tahun_kerja, bonus, jam;

int main()
{
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

  cout << "Username \t: ";
  getline(cin, user);
  cout << "Password \t: ";
  getline(cin, pass);

  if (user == "dejan azul" && pass == "dejanazul")
  {
    int pilih;

    system("cls");

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

    cout << "Berikut Jabatan yang Dapat Dipilih: \n";
    cout << "- Karyawan\n";
    cout << "- Manajer\n";
    cout << "- CEO\n";
    cout << "Masukkan Jabatan anda: ";

    getline(cin, jabatan);

    if (jabatan == "Karyawan")
    {
      cout << "Masukkan lama tahun kerja: ";
      cin >> tahun_kerja;
      if (tahun_kerja > 0 && tahun_kerja < 5)
      {
        bonus = 1000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
        cout << endl;
      }
      else if (tahun_kerja >= 5 && tahun_kerja <= 15)
      {
        bonus = 1500000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
        cout << endl;
      }
      else if (tahun_kerja > 15)
      {
        bonus = 2000000 * tahun_kerja;
        cout << "Bonus anda adalah: Rp" << bonus;
        cout << endl;
      }
      else
      {
        cout << "Tahun kerja tidak valid!";
      }
    }
    else if (jabatan == "Manajer")
    {
      cout << "Masukkan lama tahun kerja: ";
      cin >> tahun_kerja;
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
        cout << "Tahun kerja tidak valid!";
      }
    }
    else if (jabatan == "CEO")
    {
      cout << "Masukkan lama tahun kerja: ";
      cin >> tahun_kerja;
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
        cout << "Tahun kerja tidak valid!";
      }
    }
    else
    {
      cout << "Jabatan tidak ditemukan, keluar dari program\n";
    }
  }
  return 0;
}