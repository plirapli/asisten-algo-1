#include <iostream>
using namespace std;

int main(){
     const float jari_jari= 10;
     
     // Luas Lingkaran;
     float luas_lingkaran= 3.14 * jari_jari * jari_jari;
     // Keliling Lingkaran;
     float keliling_lingkaran= 3.14 * 2 * jari_jari;
     // Luas Permukaan Bola
     float luas_permukaan= 4 * 3.14 * jari_jari *jari_jari;
     // Volume Bola
     float volume_bola= 4/3 * 3.14 * jari_jari * jari_jari * jari_jari;
     
     cout<<"Luas Lingkaran= "<<luas_lingkaran<<endl;
     cout<<"Kelilinga Lingkaran= "<<keliling_lingkaran<<endl;
     cout<<"Luas Permukaan Bola= "<<luas_permukaan<<endl;
     cout<<"volume bola= "<<volume_bola;
     
}
