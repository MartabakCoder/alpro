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
long bilA, *bilB;



int main(){
    bilA = 10;

    bilB = &bilA;


    cout<<"Sebelum "<<endl;
    cout<<"bilangan A : "<<bilA<<endl;
    cout<<"bilangan *B : "<<*bilB<<endl;
    cout<<"bilangan B : "<<bilB<<endl;
    cout<<"bilangan &A : "<<&bilA<<endl;
    

    *bilB = 200;

    cout<<"Sesudah "<<endl;
    cout<<"bilangan A : "<<bilA<<endl;
    cout<<"bilangan *B : "<<*bilB<<endl;
    cout<<"bilangan B : "<<bilB<<endl;
    cout<<"bilangan &A : "<<&bilA<<endl;

    bilA = 15;


    cout<<"Sebelum "<<endl;
    cout<<"bilangan A : "<<bilA<<endl;
    cout<<"bilangan *B : "<<*bilB<<endl;
    cout<<"bilangan B : "<<bilB<<endl;
    cout<<"bilangan &A : "<<&bilA<<endl;
}