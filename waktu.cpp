/*
Judul : Selisih waktu
Author : Rajendra Nohan
Tanggal : 17 Maret 2022 
Deskripsi : Menentukan selisih waktu a dengan waktu b
Kamus :
       tipe data waktu
         <
              jam,menit,detik
         > pertama,kedua,hasil <-tipe perkotakan
       
Notasi : 
         inputJamPertama();
         inputMenitPertama();
         inputDetikPertama();


         inputJamKedua();
         inputMenitKedua();
         inputDetikKedua();

         hasil.detik <- detikSelisih(pertama.detik,kedua.detik);
         hasil.menit <- menitSelisih(pertama.menit,kedua.menit);
         hasil.jam <- jamSelisih(pertama.jam,kedua.jam):


         inputJamPertama():
              pertama.jam<-input
              cekTime(pertama.jam,1,'H');
         inputMenitPertama():
              pertama.menit<-input
              cekTime(pertama.menit,1,'M');
         inputDetikPertama():
              pertama.detik<-input
              cekTime(pertama.detik,1,'S');

         inputJamKedua():
              kedua.jam<-input
              cekTime(kedua.jam,1,'H');
         inputMenitKedua():
              kedua.menit<-input
              cekTime(kedua.menit,1,'M');
         inputDetikKedua():
              kedua.detik<-input
              cekTime(kedua.detik,1,'S');

         cekTime(time<-riil *untuk parameter waktu validasi, step<-integer *untuk parameter tahapan validasi, timeChar<-char *untuk mengetahui jenis waktu yang di validasi):
         Jika (time>60): *untuk validasi waktu menit dan detik
                Output(ERROR);
                Jika(step==1): *untuk mengecek inputan tahapan validasi
                     Jika(timeChar=='M'): *untuk Menit
                            inputMenitPertama()
                     Jika(timeChar=='S') *untuk Detik
                            inputDetikPertama()
                Jika(step==2): *untuk mengecek inputan tahapan validasi
                     Jika(timeChar=='M'): *untuk Menit
                            inputMenitKedua()
                     Jika(timeChar=='S') *untuk Detik
                            inputDetikKedua()
         Jika (time>24 && timeChar=='H'): *untuk validasi jam
                Output(ERROR);
                Jika(step==1): *untuk mengecek inputan tahapan validasi
                     inputJamPertama()
                Jika(step==2): *untuk mengecek inputan tahapan validasi
                     inputJamPertama()
       
         detikSelisih(detikSatu,detikDua):
                hasil<-integer
                hasil<-detikDua-detikSatu
                if(hasil<0){
                     kedua.menit <- kedua.menit-1;
                     hasil <- (60+detikDua)-detikSatu;
                }
                return hasil

         menitSelisih(menitSatu,menitDua):
                hasil<-integer
                hasil<-menitDua+menitSatu
                if(hasil<0){
                     kedua.jam <- kedua.jam-1;
                     hasil <- (60+menitDua)-menitSatu;
                }
                return hasil
         jamSelisih(jamSatu,jamDua):
                hasil<-integer
                hasil<-jamDua-jamSatu
                return hasil
*/
#include<iostream>

using namespace std;

//Kamus Global
struct waktu{
       float jam, menit, detik;
} pertama,kedua, hasil;

void inputJamPertama();
void inputMenitPertama();
void inputDetikPertama();

void inputJamKedua();
void inputMenitKedua();
void inputDetikKedua();

float jamSelisih(float jamSatu, float jamDua);
float menitSelisih(float menitSatu, float menitDua);
float detikSelisih(float detikSatu, float detikDua);

void cekTime(float time, int step, char timeChar);

int main(){
       //START INPUT PROCESS
       cout << "Program selisih waktu" << endl;
       cout << "====== Waktu Tersedikit ======" << endl;
       inputJamPertama();
       inputMenitPertama();
       inputDetikPertama();

       cout << "====== Waktu Terbanyak ======" << endl;
       inputJamKedua();
       inputMenitKedua();
       inputDetikKedua();
       //END INPUT PROCESS

       //SAVE PROCESS TO VARIABLE
       hasil.detik = detikSelisih(pertama.detik,kedua.detik);
       hasil.menit = menitSelisih(pertama.menit,kedua.menit);
       hasil.jam = jamSelisih(pertama.jam,kedua.jam);
       //END SAVE PROCESS TO VARIABLE

       //START OUTPUT
       cout << "========================"<<endl;
       cout << "Hasilnya adalah "<<hasil.jam<<":"<<hasil.menit<<":"<<hasil.detik<<endl;
       //END OUTPUT
}

//START INPUTAN PERTAMA
//Judul:Untuk membedakan operasi inputan sehingga dapat di panggil berulang kali
void inputJamPertama(){
       cout << "Jam : ";
       cin  >> pertama.jam;
       cekTime(pertama.jam,1,'H');
}

void inputMenitPertama(){
       cout << "Menit : ";
       cin  >> pertama.menit;
       cekTime(pertama.menit,1,'M');
}

void inputDetikPertama(){
       cout << "Detik : ";
       cin  >> pertama.detik;
       cekTime(pertama.detik,1,'S');
}
//END INPUTAN PERTAMA

//START INPUTAN KEDUA
//Judul:Untuk membedakan operasi inputan sehingga dapat di panggil berulang kali
void inputJamKedua(){
       cout << "Jam : ";
       cin  >> kedua.jam;
       cekTime(kedua.jam,2,'H');
}

void inputMenitKedua(){
       cout << "Menit : ";
       cin  >> kedua.menit;
       cekTime(kedua.menit,2,'M');
}

void inputDetikKedua(){
       cout << "Detik : ";
       cin  >> kedua.detik;
       cekTime(kedua.detik,2,'S');
}
//END INPUTAN KEDUA

//START OPERASI
float jamSelisih(float jamSatu, float jamDua){
       //Judul: Sebuah Operasi untuk menentukan selisih jam
       //Kamus Lokal
       float hasil;
       hasil = jamDua-jamSatu;
       return hasil;
}

float menitSelisih(float menitSatu, float menitDua){
       //Judul: Sebuah Operasi untuk menentukan selisih menit
       //Kamus Lokal
       float hasil;

       hasil = menitDua-menitSatu;
       if(hasil<0){
              kedua.jam = kedua.jam-1;
              hasil = (60+menitDua)-menitSatu;
       }
       return hasil;
}

float detikSelisih(float detikSatu, float detikDua){
       //Judul: Sebuah Operasi untuk menentukan selisih detik
       //Kamus Lokal
       float hasil;
       hasil = detikDua-detikSatu;
       if(hasil<0){
              kedua.menit = kedua.menit-1;
              hasil = (60+detikDua)-detikSatu;
       }
       return hasil;
}
//END OPERASI

//START VALIDASI
void cekTime(float time, int step, char timeChar){
       //Judul: Menvalidasi waktu yang dimasukan
       if(time>60){
              cout << "ERROR: Waktu yang di masukan melebihi batas." << endl;
              cout << "Silahkan masukan ulang" << endl;
              if(step==1){
                     if (timeChar=='M'){
                            inputMenitPertama();
                     }else if (timeChar=='S'){
                            inputDetikPertama();
                     }
              }else if (step==2){
                     if (timeChar=='M'){
                            inputMenitKedua();
                     }else if (timeChar=='S'){
                            inputDetikKedua();
                     }
              }
       }else if (time>24 && timeChar=='H'){
              cout << "ERROR: Waktu yang di masukan melebihi batas." << endl;
              cout << "Silahkan masukan ulang" << endl;
              if(step==1){
                     inputJamPertama();

              }else if(step==2){
                     inputJamKedua();
              }
       }
}
//END VALIDASI