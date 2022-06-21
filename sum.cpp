/*
Judul : Mencari nilai tertinggi dari sebuah masukan
Author : Rajendra Nohan
Tanggal : 17 Maret 2022
Deskripsi : Mencari nilai tertinggi dari sebuah masukan dan di pisah dengan " " spasi untuk penilaiannya
Kamus:
       memoriNilai<- array "untuk menyimpan masukan tadi kedalam sebuah array"
       inputNilai<- string "untuk menyimpan nilai masukan C++"
       nilMax <- integer "menyimpan hasil maksimal"
Notasi : main():
        inputNilai <- input
        perulangan dari 0 hingga jumlah char dalam variable inputNilai:
           jika inputNilai[i] == ' ' atau telah menemukan char spasi maka:
               memoriNilai.pushback(stoi(temp))
                   *pushback artinya memasukan nilai ke array yang paling belakang
                   *stoi artinya mekonversi string ke bentuk integer
               temp = ""
                   *mereset temp menjadi kosong semula
           jika tidak maka:
               temp.push_back(inputNilai[i]);
                   *pushback menyimpan nilai char ke string temp yang paling belakang
        nilMax <- 0 *default terkecil
        perulangan dari 0 hingga jumlah array dalam variable memoriNilai:
           jika nilMax <= memoriNilai[i] *untuk menemukan bilangan dari nilMax:
               nilMax = memoriNilai[i];
                   *nilai terbesar tadi di simpan kembali ke variable nilMax
           return memoriNilai;
        nilMax <- Output
       
*/
#include<iostream>
#include<vector>

using namespace std;

//Kamus Global
vector<int> memoriNilai;
string inputNilai;
int nilMax;
string temp = "";


int main() {
  
   cout<<"Input Nilai: ";
   getline(cin, inputNilai);
   int i = 0; //variable untuk perulangan
       while(i<inputNilai.length()){
           if(inputNilai[i]==' '){
               memoriNilai.push_back(stoi(temp));
               temp = "";
           }
           else{
               temp.push_back(inputNilai[i]);
           }
           i++;
       }
       memoriNilai.push_back(stoi(temp));//define terakhir soalnya pada bil terakhir jarang ya memasukan spasi
   i = 0; //variable untuk perulangan
   while(i<(memoriNilai.size())){
       if(nilMax<memoriNilai[i]){
           nilMax = memoriNilai[i];
       }
       i++;
   }
   cout<<"Nilai maksimalnya ialah : "<<nilMax<<endl;
  
}