#include <iostream>
#include <iomanip>
using namespace std;

string user, pass, jabatan;
int tahun_kerja, bonus, jam;

int main()
{
	system("cls");
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
		system("pause");
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
				 << "\t   Silahkan Pilih Menu:";
		cout << setfill(' ') << setw(17) << "||" << endl;
		cout << "||";
		cout << setfill(' ') << setw(48) << "||" << endl;
		cout << setfill('=') << setw(50) << "=";
		cout << endl;
		cout << "1. Jabatan\n";
		cout << "2. Absensi\n";
		cout << "3. Laporan\n";
		cout << "Pilih: ";
		cin >> pilih;

		switch (pilih)
		{
		case 1:
			cout << endl;
			cout << "List Jabatan: \n";
			cout << "Karyawan\n";
			cout << "Manajer\n";
			cout << "CEO\n";
			cout << "Masukkan Jabatan anda: ";
			cin.ignore();
			getline(cin, jabatan);

			if (jabatan == "Karyawan")
			{
				cout << "Masukkan lama hari kerja: ";
				cin >> tahun_kerja;

				if (tahun_kerja <= 50)
				{
					bonus = 1000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else if (tahun_kerja >= 50 && tahun_kerja <= 150)
				{
					bonus = 2000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else if (tahun_kerja >= 150)
				{
					bonus = 3000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else
					cout << "hari kerja tidak valid!";
			}
			else if (jabatan == "Manajer")
			{
				cout << "Masukkan lama hari kerja: ";
				cin >> tahun_kerja;
				if (tahun_kerja <= 50)
				{
					bonus = 4000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else if (tahun_kerja >= 50 && tahun_kerja <= 150)
				{
					bonus = 5000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else if (tahun_kerja >= 150)
				{
					bonus = 6000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else
					cout << "hari kerja tidak valid!";
			}
			else if (jabatan == "CEO")
			{
				cout << "Masukkan lama hari kerja: ";
				cin >> tahun_kerja;
				if (tahun_kerja <= 50)
				{
					bonus = 7000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else if (tahun_kerja >= 50 && tahun_kerja <= 150)
				{
					bonus = 8000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else if (tahun_kerja >= 150)
				{
					bonus = 9000000 * 20 / 100;
					cout << "Gaji anda adalah: " << bonus;
					cout << endl;
				}
				else
					cout << "hari kerja tidak valid!";
			}
			else
				cout << "Jabatan tidak ditemukan, keluar dari program\n";
			break;

		case 2:
			cout << endl;
			cout << "Masukkan Jabatan Anda\t: ";
			cin.ignore();
			getline(cin, jabatan);
			cout << "Masukkan jam absen\t: ";
			cin >> jam;
			if (jam >= 7 && jam <= 10)
			{
				cout << "Halo " << user << endl;
				cout << "anda tepat waktu selamat bekerja";
			}
			else if (jam >= 10)
			{
				cout << "Halo " << user << endl;
				cout << "anda telat, lain kali absen tepat waktu yaaa";
			}
			else if (jam <= 7)
			{
				cout << "Anda terlalu cepat, tidur lagi";
			}
			break;

		case 3:
			cout << endl;
			cout << setfill('=') << setw(50) << "=" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << "||" << setw(15) << "\t\tDaftar Laporan";
			cout << setfill(' ') << setw(20) << "||" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << setfill('=') << setw(50) << "=" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << "||"
					 << "Jabatan\t: Karyawan" << setw(24) << "||" << endl;
			cout << "||"
					 << "Nama Tugas\t: DDP" << setw(29) << "||" << endl;
			cout << "||"
					 << "Deadline\t: Senin" << setw(27) << "||" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << "||" << setfill(' ') << setw(48) << "||" << endl;
			cout << setfill('=') << setw(50) << "=" << endl;
			system("pause");
			system("cls");

			break;

		default:
			cout << "Menu tidak ada, silahkan coba lagi!";
			exit(0);
			break;
		}
	}
	else
	{
		cout << "Username dan Password salah, silahkan coba lagi";
	}
}