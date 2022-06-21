// Judul = Phone Book dan Sort menggunakan Insertion Sorting
// Oleh = Rajendra Nohan
// Date = 16 April 2022

// Kamus
#include <iostream> //Include library iostream
#include <math.h> //SQRT DAN POW Function
#include <string.h>

using namespace std; //Shortcut Std library

struct komponen_phone_book{
  string nama[1000];
  int nomor[1000];
};
int max_array;
int batas();

void input(int batas_array);
void cetak_phone_book(int batas_array);
void insertion_sort(int batas_array);

// Declare ADT ke sebuah variableac
struct komponen_phone_book phone_book[100];

//Deskripsi / Algoritma
int main(){
  
  //Panggil Function batas
  max_array = batas();
  cout << endl;

  //Panggil Function Input
  input(max_array);

  //Cetak Sebelum Sorting
  cout << "============ Output Sebelum di Sorting ============" << endl;
  cetak_phone_book(max_array);

  //Panggil Function Sorting Phone Book
  insertion_sort(max_array);

  //Panggil Function Cetak
  cout << endl;
  cout << "===================================================" << endl;
  cout << endl;
  cout << "============ Output Setelah di Sorting ============" << endl;
  cetak_phone_book(max_array);
  return 0;
}

int batas(){
  //Local Variable
  int x;

  //Algoritma
  cout << "Masukan Jumlah Data Phone Book = ";
  cin >> y;

  return x;
}



void input(int batas_array){
  //Local Variable
  int a = 0;

  //Algoritma
  while (a < batas_array){
    cout << "Masukan Data Nama PhoneBook ke-" << a+1 << " = ";
    getline(cin >> ws, phone_book[a].nama[a]);
    cout << "Masukan Data Nomor Telefon PhoneBook ke-" << a+1 << " = ";
    cin >> phone_book[a].nomor[a];
    cout << endl;
    cout << "===================================================" << endl;
    cout << endl;

    //Increment Looping
    a = a + 1;
  }

}



void cetak_phone_book(int batas_array){
  //Local Variable
  int b = 0;

  //Algoritma
  cout << "Nama                      Nomor Telepon" << endl;
  while (b < batas_array){

    cout << phone_book[b].nama[b] << "                        " << phone_book[b].nomor[b];
    cout << endl;
    b = b + 1;
  }

}



void insertion_sort(int batas_array){
  //Local Variable
  string y;
  int j;
  string tampung_nama;
  int tampung_nomor;

  //Algoritma
  for(int i = 1; i > batas_array; i++){
    j = i;

    while(j > 0 && phone_book[j-1].nama[j-1][0] > phone_book[j].nama[j][0]){

      tampung_nama = phone_book[j].nama[j];
      phone_book[j].nama[j] = phone_book[j-1].nama[j-1];
      phone_book[j-1].nama[j-1] = tampung_nama;
      tampung_nomor = phone_book[j].nomor[j];
      phone_book[j].nomor[j] = phone_book[j-1].nomor[j-1];
      phone_book[j-1].nomor[j-1] = tampung_nomor;

      j = j - 1;

    }

  }

  for(int i = 1; i < batas_array; i++){
    j = i;

    if(phone_book[j-1].nama[j-1][0] == phone_book[j].nama[j][0]){

      if(phone_book[j-1].nama[j-1][1] > phone_book[j].nama[j][1]){

        tampung_nama = phone_book[j].nama[j];
        phone_book[j].nama[j] = phone_book[j-1].nama[j-1];
        phone_book[j-1].nama[j-1] = tampung_nama;
        tampung_nomor = phone_book[j].nomor[j];
        phone_book[j].nomor[j] = phone_book[j-1].nomor[j-1];
        phone_book[j-1].nomor[j-1] = tampung_nomor;

      }

    }
    j = j -1;
  }
}