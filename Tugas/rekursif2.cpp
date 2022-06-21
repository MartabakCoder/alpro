//Judul : Contoh Deret dengan Rekursif
/*
Author: Rajendra Nohan
Tanggal : 21 Mei 2022
*/
#include <iostream>

using namespace std;

//Kamus Global
int dari, hingga;
int i;
void Deret (int dari, int hingga){
    //Judul : Fungsi Deret
    while (hingga>=dari){
        cout<<dari<<" ";
        dari = dari + 1;
    }
}

//Algoritma
int main (){
    cout<<"Derer kecil ke besar"<<endl;
    cout<<"Deret dari : ";
    cin>>dari;
    cout<<"Hingga :";
    cin>>hingga;
    

    Deret(dari,hingga);
}