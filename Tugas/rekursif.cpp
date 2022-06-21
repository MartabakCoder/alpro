//Judul : Contoh Faktorial dengan Rekursif
/*
Author: Rajendra Nohan
Tanggal : 14 Mei 2022
*/
#include <iostream>
using namespace std;

//Kamus Global
int nilai,hasil;

long int faktorial (int nilaiMasukan){
    //Judul : Fungsi Faktorial
	if (nilaiMasukan==1){
        return(nilaiMasukan);
    }else{
		return (nilaiMasukan*faktorial(nilaiMasukan-1));
    }
}

//Algoritma
int main(){
	cout<<"Nilai Faktorial"<<endl;
	cout<<"Masukan Nilai = ";
	cin>>nilai;
	
	hasil=faktorial(nilai);
	cout<<"Faktorial "<<nilai<<" != "<<hasil<<endl;
}