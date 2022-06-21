/*
	Judul 	: Luas Lingkaran& Segitiga
 	Author	: Rajendra Nohan
	Tanggal	: 10 Maret 2022 
*/
#include <iostream>

using namespace std;

//Kamus Global
float phi;
float jari, sisiA, sisiB, sisiC, tinggi;
float Lsegitiga, Ksegitiga; 
float Llingkaran, Klingkaran; 

void segitiga(); 
float luasSegitiga(float a, float t);
float kelilingSegitiga(float a, float b, float c);

void lingkaran();
float luasLingkaran(float r);
float kelilingLingkaran(float r);

int main(){
	segitiga();
	lingkaran();
}

void segitiga(){
	//Judul : Fungsi yang menampung keseluruhan proses pada segitiga.
	/* Deskripsi : 	input sisiA <- riil
				input sisiB <- riil
				input sisiC <- riil
				input tinggi <-  rill
				
				Ksegitiga = kelilingSegitiga( sisiA, sisiB, sisiC) <- riil
				Lsegitiga = luasSegitiga(sisiA, tinggi)  <- riil
				
				output Ksegitiga;
				output Lsegitiga;
	*/
	cout << "Menghitung Luas dan Keliling Segitiga"<<endl;
	cout << "Masukan alas/sisi a : ";
	cin   >> sisiA;
	cout << "Masukan sisi b : ";
	cin   >> sisiB;
	cout << "Masukan sisi c : ";
	cin   >> sisiC;
	cout << "Masukan tinggi : ";
	cin   >> tinggi;
	Ksegitiga = kelilingSegitiga( sisiA, sisiB, sisiC);
	Lsegitiga = luasSegitiga(sisiA, tinggi);

	cout << "Keliling : "<<Ksegitiga<<endl;
	cout << "Luas : "<<Lsegitiga<<endl;
}
float kelilingSegitiga(float a, float b, float c){
	//Judul : perhitungan keliling segitiga
	/* Deskripsi :	return a+b+c <-riil*/
	return a+b+c;
}
float luasSegitiga(float a, float t){
	//Judul : perhitungan luas segitiga
	/* Deskripsi :	return 0.5*a*t <-riil*/
	return 0.5*a*t;
}

void lingkaran(){
	//Judul : Fungsi yang menampung keseluruhan proses pada lingkaran.
	/* Deskripsi : 	input jari <- riil
				
				Klingkaran = kelilingLingkaran( jari) <- riil
				Llingkaran = luasLingkaran(jari)  <- riil
				
				output Klingkaran
				output Llingkaran
	*/
	cout << "Menghitung Luas dan Keliling Lingkaran"<<endl;
	cout << "Masukan jari-jari Lingkaran: ";
	cin   >> jari;
	Klingkaran = kelilingLingkaran(jari);
	Llingkaran = luasLingkaran(jari);

	cout << "Keliling : "<<Klingkaran<<endl;
	cout << "Luas : "<<Llingkaran<<endl;
}
float kelilingLingkaran(float r){
	//Judul : perhitungan keliling lingkaran
	/* Deskripsi :	phi <- 3.14
				return 2*phi*r <-riil*/
	//KAMUS LOKAL
	phi = 3.14;
	
	return 2*phi*r;
}
float luasLingkaran(float r){
	//Judul : perhitungan luas lingkaran
	/* Deskripsi :	phi <- 3.14
				return phi*pow(r,2) <-liil*/
	//KAMUS LOKAL
	phi = 3.14;
	
	return phi*r*r;
}