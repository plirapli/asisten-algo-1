#include <iostream>
using namespace std;

int correctPIN = 124220138;

int choice;
float saldo = 1000.0;

bool checkPIN(int enteredPIN, int correctPIN)
{
  return enteredPIN == correctPIN;
}

void displayMenu()
{
  cout << "Pilihan Menu:\n";
  cout << "1. Cek Saldo\n";
  cout << "2. Tarik Tunai\n";
  cout << "3. Setor Tunai\n";
  // cout << "4. Transfer\n";
  cout << "0. Keluar\n";
}

int main()
{
  system("cls");

  int enteredPIN;
  do
  {
    int attempts = 3;
    cout << "Selamat Datang, Silahkan Masukkan Pin ATM Anda\n";
    cout << "Masukkan PIN: ";
    cin >> enteredPIN;

    if (!checkPIN(enteredPIN, correctPIN))
    {
      attempts--;
      if (attempts > 0)
      {
        cout << "PIN salah. Sisa percobaan: " << attempts << endl;
      }
      else
      {
        cout << "Anda telah memasukkan PIN salah sebanyak 3 kali. Program terkunci." << endl;
        return 0;
      }
    }
    cout << endl;
  } while (!checkPIN(enteredPIN, correctPIN));

  do
  {
    displayMenu();
    cout << "Pilih operasi (1-3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Saldo Anda: $" << saldo << endl;
      cout << endl;
      break;

    case 2:
      float amount;
      cout << "Masukkan jumlah yang ingin ditarik: $";
      cin >> amount;
      if (amount <= saldo)
      {
        saldo -= amount;
        cout << "Transaksi berhasil. Saldo Anda sekarang: $" << saldo << endl;
      }
      else
      {
        cout << "Saldo tidak mencukupi." << endl;
      }
      cout << endl;
      break;

    case 3:
      float depositAmount;
      cout << "Masukkan jumlah yang ingin disetor: $";
      cin >> depositAmount;
      saldo += depositAmount;
      cout << "Transaksi berhasil. Saldo Anda sekarang: $" << saldo << endl;
      cout << endl;
      break;

    case 0:
      cout << "Terima kasih. Sampai jumpa lagi!" << endl;
      break;

    default:
      cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
    }
  } while (choice != 0);

  return 0;
}
