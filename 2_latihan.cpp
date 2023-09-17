#include <iostream>
#include <cmath>

#define phi 3.14

using namespace std;

main()
{
  int jari_jari;
  float luas_alas, luas_selimut;
  float luas_permukaan;
  int tinggi_kerucut;
  float sisi_miring;

  jari_jari = 12;
  tinggi_kerucut = 6;
  sisi_miring = sqrt(jari_jari * jari_jari + tinggi_kerucut * tinggi_kerucut);

  luas_alas = phi * jari_jari * jari_jari;
  luas_selimut = phi * jari_jari * sisi_miring;
  luas_permukaan = luas_alas + luas_selimut;

  cout << "Luas Permukaan: " << luas_permukaan;
}