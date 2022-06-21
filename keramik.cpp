/*
Judul : Keramik yang di butuhkan
Author : Rajendra Nohan
Tanggal : 17 Maret 2022 
Deskripsi : Menentukan keramik yang di butuhkan dalam sebuah proyek
Notasi : sisi1Keramik<-input
         sisi2Keramik<-input
         LKeramik <- Luas(sisi1Keramik,sisi2Keramik)

         sisi1Ruang<-input
         sisi2Ruang<-input
         LRuang <- Luas(sisi1Ruang,sisi2Ruang)
         
         jumlah <- jmlKeramik(LRuang,LKeramik);
         jumlah <- output;

         Luas():
            sisi1<-riil
            sisi2<-riil
            Luas<-sisi1*sisi2
         return Luas

         jmlKeramik(LRuang,LKeramik):
            jumlah <- Lruang/LKeramik;
         return jumlah;

*/
#include<iostream>

using namespace std;

//Kamus Global
int sisi1Keramik,sisi2Keramik;
int sisi1Ruang,sisi2Ruang;
float LKeramik,LRuang;
float jumlahKeramik;

float Luas(int sisi1, int sisi2){
    //Judul: Operasi menghitung Luas persegi/persegi panjang
    /* Deskripsi: 
            sisi1<-riil
            sisi2<-riil
            Luas<-sisi1*sisi2
         return Luas
    */
   //Kamus Lokal
   float Luas;

   Luas = sisi1*sisi2;
   return Luas;
}

float jmlKeramik(int luas1, int luas2){
    //Judul: Operasi menghitung Luas persegi/persegi panjang
    /* Deskripsi: 
            jumlah <- Lruang/LKeramik;
        return jumlah;
    */
   //Kamus Lokal
   float jumlah;

   jumlah = luas1/luas2;
   return jumlah;
}

int main(){
    cout << "Sisi satu keramik: ";
    cin  >> sisi1Keramik;
    cout << "Sisi dua keramik: ";
    cin  >> sisi2Keramik;
    LKeramik = Luas(sisi1Keramik,sisi2Keramik);
    cout<<"Luas Keramik : "<<LKeramik<<endl;
    cout << "Sisi satu ruang: ";
    cin  >> sisi1Ruang;
    cout << "Sisi dua ruang: ";
    cin  >> sisi2Ruang;
    LRuang = Luas(sisi1Ruang,sisi2Ruang);
    cout<<"Luas Ruang : "<<LRuang<<endl;
    jumlahKeramik = jmlKeramik(LRuang,LKeramik);
    cout<<"Jumlah Keramik :"<<jumlahKeramik<<endl;
}