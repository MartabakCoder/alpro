//Judul : Pointer untuk menukar isi dari dua variable;
/*
Author: Rajendra Nohan
Tanggal : 23 Mei 2022
Deskripsi:
    bilA<-12
    bilB<-42
    
    "Before"
    print(bilA)
    print(bilB)

    swap(&bilA,&bilB);

    "After"
    print(bilA)
    print(bilB)
*/
#include <iostream>

using namespace std;

//Kamus Global



int main(){
    int nilai[] = {12,10,25};
    int *ptrNilai;
    ptrNilai = nilai;
    cout<<"PTR Nilai "<<*ptrNilai<<endl;
    cout<<"Alamat array Nilai "<<nilai<<endl;
    cout<<"Nilai pada alamat "<<ptrNilai<<" adalah "<<*ptrNilai<<endl;
    cout<<"Elemen array index pertama "<<nilai[0]<<endl;
    cout<<"Elemen array (dengan array)"<<endl;
    for(int i=0;i<3;i++){
        cout<<nilai[i]<<" ";
    }
    cout<<"\nElemen array (dengan pointer) "<<endl;
    for(int i=0;i<3;i++){
        cout<<*(ptrNilai+i)<<" ";
    }
}