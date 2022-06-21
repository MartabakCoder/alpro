
//judul membuat penyelesaiain 2 buah balok
/* 
kamus 
	p, l, t ← integer
	panj, lebr, tingg ← integer
	vol, Volume ← real 
diskripsi

	input panj
	input lebr
	input ting
	volume ← panj * lebr * tingg
output volume

input p
	input l
	input t	
	vol ← p * l * t
output vol

=====simpulan dari notasi ====================
dari 2 buah balok tersebut menjadikan kamusnya bertambah minimal 2x lebih banyak dari solusi awal (kasus 1 balok), bagaimana bila 3, 4, 5 atau banyak balok….

===== codingnya untuk notasi diatas adalah sebagai berikut ===============

*/
// judul : belajar dasar dasar type bentukan tanpa type bentukan
//  beberapa (2) kotak 3D alias balok 
// modifikasi : 23 maret 2022
// oleh rizqanovic

// kamus
#include <iostream>
using namespace std;
  int p,l,t;
  int panj, lebr, tingg;
  
  float vol;
  float Volume;
  
//diskripsi
int main() 
{
    cout << "masukkan komponen balok ke 1 .. \n";
    
    cout << "input panjangnya "; cin >>  p;
    cout << "input lebarnya "; cin >>  l;
    cout << "input tingginya "; cin >> t;
    
    // proses perhitungan
    vol = p * l * t;
    
    cout << "volume  balok dengan p = " << p << ", l = " << l << ", t = " << t << "  adalah " << vol << endl;
    
    
    cout << "masukkan komponen balok ke 2 .. \n";
    
    cout << "input panjangnya "; cin >>  panj;
    cout << "input lebarnya "; cin >>  lebr;
    cout << "input tingginya "; cin >> tingg;

    // proses perhitungan
    Volume = panj * lebr * tingg;
    
    cout << "volume  balok dengan p = " << panj << ", l = " << lebr << ", t = " << tingg << "  adalah " << Volume << endl;
    
}