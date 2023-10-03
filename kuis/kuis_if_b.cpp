#include <iostream>

using namespace std;

string ulang, user, cek, pass, nrm, nama_pasien, nrm2, nama_pasien2, nrm3, nama_pasien3;
int pilih;
bool pengamanan = false;

int main()
{
    system("cls");
    cout << endl
         << endl;
    cout << "Selamat Datang di RS Yulje!!!, \nSilahkan Login!!!\n";
    cout << "Username \t: ";
    getline(cin, user);
    cout << "Password \t: ";
    getline(cin, pass);

    if (user == "dejan" && pass == "138")
    {
        system("cls");
        cout << endl
             << endl;
        cout << "Selamat Datang, " << user << endl;

        cout << "Silahkan Pilih Menu: \n";
        cout << "1. Input Data Pasien\n";
        cout << "2. Cetak Data Semua Pasien\n";
        cout << "3. Cek Data Pasien\n";
        cout << "Pilih: ";
        cin >> pilih;
        cout << endl;

        switch (pilih)
        {
        case 1:
            cout << "Silahkan Inputkan Data Pasien:\n";
            cout << "Data Pasien Ke-1: \n";
            cout << "Nomor Rekam Medis (3 angka)\t: ";
            cin.ignore();
            getline(cin, nrm);
            cout << "Nama Pasien\t\t\t: ";
            getline(cin, nama_pasien);
            cout << endl;

            cout << "Data Pasien Ke-2: \n";
            cout << "Nomor Rekam Medis (3 angka)\t: ";
            getline(cin, nrm2);
            cout << "Nama Pasien\t\t\t: ";
            getline(cin, nama_pasien2);
            cout << endl;

            cout << "Data Pasien Ke-3: \n";
            cout << "Nomor Rekam Medis (3 angka)\t: ";
            getline(cin, nrm3);
            cout << "Nama Pasien\t\t\t: ";
            getline(cin, nama_pasien3);

            cout << endl;
            pengamanan = true;
            break;

        case 2:
            if (pengamanan)
            {
                cout << "Berikut Laporan Data Semua Pasien: \n";
                cout << "Data Pasien Ke-1: \n";
                cout << "Nomor Rekam Medis\t: " << nrm << endl;
                cout << "Nama Pasien\t\t: " << nama_pasien << endl;
                cout << endl;

                cout << "Data Pasien Ke-2: \n";
                cout << "Nomor Rekam Medis\t: " << nrm2 << endl;
                cout << "Nama Pasien\t\t: " << nama_pasien2 << endl;
                cout << endl;

                cout << "Data Pasien Ke-3: \n";
                cout << "Nomor Rekam Medis\t: " << nrm3 << endl;
                cout << "Nama Pasien\t\t: " << nama_pasien3 << endl;
                cout << endl;
            }
            else
            {
                cout << "Silahkan Input Data Pasien Terlebih Dahulu!!!\n";
            }
            break;

        case 3:
            if (pengamanan)
            {
                cout << "Selamat Datang di Menu Pengecekan Data Pasien\n";
                cout << "Silahkan Masukkan Nomor Rekam Medis Untuk Melakukan Pengecekan!!!\n";
                cout << "Nomor Rekam Medis Pasien: ";
                cin.ignore();
                getline(cin, cek);

                if (cek == nrm)
                {
                    cout << "Data Ditemukan!!!\n";
                    cout << "Berikut Data Yang Anda Cari: \n";
                    cout << "Nomor Rekam Medis: " << nrm;
                    cout << "Nama Pasien: " << nama_pasien;
                }
                else if (cek == nrm2)
                {
                    cout << "Data Ditemukan!!!\n";
                    cout << "Berikut Data Yang Anda Cari: \n";
                    cout << "Nomor Rekam Medis: " << nrm2;
                    cout << "Nama Pasien: " << nama_pasien2;
                }
                else if (cek == nrm3)
                {
                    cout << "Data Ditemukan!!!\n";
                    cout << "Berikut Data Yang Anda Cari: \n";
                    cout << "Nomor Rekam Medis: " << nrm3;
                    cout << "Nama Pasien: " << nama_pasien3;
                }
                else
                {
                    cout << "Data Tidak Ditemukan, Silahkan Coba Lagi!!!\n\n";
                }
            }
            else
            {
                cout << "Silahkan Input Data Pasien Terlebih Dahulu!!!\n";
            }
            break;

        default:
            cout << "Menu Beum Ada !!!\n Silhkan Pilih Ulang!\n";
            break;
        }

        cout << "Tersisa 2 Kesempatan Lagi Untuk Kembali Ke Menu!\n";
        cout << "Apakah Anda Ingin Kembali Ke Menu? (y/n) : ";
        cin >> ulang;
        if (ulang == "Y" || ulang == "y")
        {
            system("cls");
            cout << endl
                 << endl;
            cout << "Selamat Datang, " << user << endl;

            cout << "Silahkan Pilih Menu: \n";
            cout << "1. Input Data Pasien\n";
            cout << "2. Cetak Data Semua Pasien\n";
            cout << "3. Cek Data Pasien\n";
            cout << "Pilih: ";
            cin >> pilih;
            cout << endl;

            switch (pilih)
            {
            case 1:
                cout << "Silahkan Inputkan Data Pasien:\n";
                cout << "Data Pasien Ke-1: \n";
                cout << "Nomor Rekam Medis (3 angka)\t: ";
                cin.ignore();
                getline(cin, nrm);
                cout << "Nama Pasien\t\t\t: ";
                getline(cin, nama_pasien);
                cout << endl;

                cout << "Data Pasien Ke-2: \n";
                cout << "Nomor Rekam Medis (3 angka)\t: ";
                getline(cin, nrm2);
                cout << "Nama Pasien\t\t\t: ";
                getline(cin, nama_pasien2);
                cout << endl;

                cout << "Data Pasien Ke-3: \n";
                cout << "Nomor Rekam Medis (3 angka)\t: ";
                getline(cin, nrm3);
                cout << "Nama Pasien\t\t\t: ";
                getline(cin, nama_pasien3);

                cout << endl;
                pengamanan = true;
                break;

            case 2:
                if (pengamanan)
                {
                    cout << "Berikut Laporan Data Semua Pasien: \n";
                    cout << "Data Pasien Ke-1: \n";
                    cout << "Nomor Rekam Medis\t: " << nrm << endl;
                    cout << "Nama Pasien\t\t: " << nama_pasien << endl;
                    cout << endl;

                    cout << "Data Pasien Ke-2: \n";
                    cout << "Nomor Rekam Medis\t: " << nrm2 << endl;
                    cout << "Nama Pasien\t\t: " << nama_pasien2 << endl;
                    cout << endl;

                    cout << "Data Pasien Ke-3: \n";
                    cout << "Nomor Rekam Medis\t: " << nrm3 << endl;
                    cout << "Nama Pasien\t\t: " << nama_pasien3 << endl;
                    cout << endl;
                }
                else
                {
                    cout << "Silahkan Input Data Pasien Terlebih Dahulu!!!\n";
                }
                break;

            case 3:
                if (pengamanan)
                {
                    cout << "Selamat Datang di Menu Pengecekan Data Pasien\n";
                    cout << "Silahkan Masukkan Nomor Rekam Medis Untuk Melakukan Pengecekan!!!\n";
                    cout << "Nomor Rekam Medis Pasien: ";
                    cin.ignore();
                    getline(cin, cek);

                    if (cek == nrm)
                    {
                        cout << "Data Ditemukan!!!\n";
                        cout << "Berikut Data Yang Anda Cari: \n";
                        cout << "Nomor Rekam Medis: " << nrm;
                        cout << "Nama Pasien: " << nama_pasien;
                    }
                    else if (cek == nrm2)
                    {
                        cout << "Data Ditemukan!!!\n";
                        cout << "Berikut Data Yang Anda Cari: \n";
                        cout << "Nomor Rekam Medis: " << nrm2;
                        cout << "Nama Pasien: " << nama_pasien2;
                    }
                    else if (cek == nrm3)
                    {
                        cout << "Data Ditemukan!!!\n";
                        cout << "Berikut Data Yang Anda Cari: \n";
                        cout << "Nomor Rekam Medis: " << nrm3;
                        cout << "Nama Pasien: " << nama_pasien3;
                    }
                    else
                    {
                        cout << "Data Tidak Ditemukan, Silahkan Coba Lagi!!!\n\n";
                    }
                }
                else
                {
                    cout << "Silahkan Input Data Pasien Terlebih Dahulu!!!\n";
                }
                break;

            default:
                cout << "Menu Beum Ada !!!\n Silhkan Pilih Ulang!\n";
                break;
            }

            cout << "Tersisa 1 Kesempatan Lagi Untuk Kembali Ke Menu!\n";
            cout << "Apakah Anda Ingin Kembali Ke Menu? (y/n) : ";
            cin >> ulang;
            if (ulang == "Y" || ulang == "y")
            {
                system("cls");
                cout << endl
                     << endl;
                cout << "Selamat Datang, " << user << endl;

                cout << "Silahkan Pilih Menu: \n";
                cout << "1. Input Data Pasien\n";
                cout << "2. Cetak Data Semua Pasien\n";
                cout << "3. Cek Data Pasien\n";
                cout << "Pilih: ";
                cin >> pilih;
                cout << endl;

                switch (pilih)
                {
                case 1:
                    cout << "Silahkan Inputkan Data Pasien:\n";
                    cout << "Data Pasien Ke-1: \n";
                    cout << "Nomor Rekam Medis (3 angka)\t: ";
                    cin.ignore();
                    getline(cin, nrm);
                    cout << "Nama Pasien\t\t\t: ";
                    getline(cin, nama_pasien);
                    cout << endl;

                    cout << "Data Pasien Ke-2: \n";
                    cout << "Nomor Rekam Medis (3 angka)\t: ";
                    getline(cin, nrm2);
                    cout << "Nama Pasien\t\t\t: ";
                    getline(cin, nama_pasien2);
                    cout << endl;

                    cout << "Data Pasien Ke-3: \n";
                    cout << "Nomor Rekam Medis (3 angka)\t: ";
                    getline(cin, nrm3);
                    cout << "Nama Pasien\t\t\t: ";
                    getline(cin, nama_pasien3);

                    cout << endl;
                    pengamanan = true;
                    break;

                case 2:
                    if (pengamanan)
                    {
                        cout << "Berikut Laporan Data Semua Pasien: \n";
                        cout << "Data Pasien Ke-1: \n";
                        cout << "Nomor Rekam Medis\t: " << nrm << endl;
                        cout << "Nama Pasien\t\t: " << nama_pasien << endl;
                        cout << endl;

                        cout << "Data Pasien Ke-2: \n";
                        cout << "Nomor Rekam Medis\t: " << nrm2 << endl;
                        cout << "Nama Pasien\t\t: " << nama_pasien2 << endl;
                        cout << endl;

                        cout << "Data Pasien Ke-3: \n";
                        cout << "Nomor Rekam Medis\t: " << nrm3 << endl;
                        cout << "Nama Pasien\t\t: " << nama_pasien3 << endl;
                        cout << endl;
                    }
                    else
                    {
                        cout << "Silahkan Input Data Pasien Terlebih Dahulu!!!\n";
                    }
                    break;

                case 3:
                    if (pengamanan)
                    {
                        cout << "Selamat Datang di Menu Pengecekan Data Pasien\n";
                        cout << "Silahkan Masukkan Nomor Rekam Medis Untuk Melakukan Pengecekan!!!\n";
                        cout << "Nomor Rekam Medis Pasien: ";
                        cin.ignore();
                        getline(cin, cek);

                        if (cek == nrm)
                        {
                            cout << "Data Ditemukan!!!\n";
                            cout << "Berikut Data Yang Anda Cari: \n";
                            cout << "Nomor Rekam Medis\t: " << nrm << endl;
                            cout << "Nama Pasien\t\t: " << nama_pasien << endl;
                        }
                        else if (cek == nrm2)
                        {
                            cout << "Data Ditemukan!!!\n";
                            cout << "Berikut Data Yang Anda Cari: \n";
                            cout << "Nomor Rekam Medis\t: " << nrm2 << endl;
                            cout << "Nama Pasien\t\t: " << nama_pasien2 << endl;
                        }
                        else if (cek == nrm3)
                        {
                            cout << "Data Ditemukan!!!\n";
                            cout << "Berikut Data Yang Anda Cari: \n";
                            cout << "Nomor Rekam Medis\t: " << nrm3 << endl;
                            cout << "Nama Pasien\t\t: " << nama_pasien3 << endl;
                        }
                        else
                        {
                            cout << "Data Tidak Ditemukan, Silahkan Coba Lagi!!!\n\n";
                        }
                    }
                    else
                    {
                        cout << "Silahkan Input Data Pasien Terlebih Dahulu!!!\n";
                    }
                    break;

                default:
                    cout << "Menu Beum Ada !!!\n Silhkan Pilih Ulang!\n";
                    break;
                }
            }
            else
            {
                cout << "Terimakasih!!!";
                exit(0);
            }
        }
        else
        {
            cout << "Terimakasih!!!";
            exit(0);
        }
    }
    else
    {
        cout << "Password & Username Tidak Ditemukan, Silahkan Coba Lagi";
    }
    return 0;
}