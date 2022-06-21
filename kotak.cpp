/*
Judul : Benda ruang balok
Author : Rajendra Nohan
Tanggal : 15 Maret 2022 
Deskripsi : Membuat Luas dan Volume sebuah Balok/Kubus
Notasi : sisi1<-input
         sisi2<-input
         Luas(sisi1,sisi2):
         L= sisi1*sisi2
            return L
         
         Keliling3D():
         K= 4(sisi1+sisi2+sisi3)
            return K
         Volume(L,sisi3)
         V = L*sisi3
         return V

         definisi2D():
         jika sisi1 == sisi2 maka
            bangun persegi<-output
         jika tidak maka
            bangun persegi panjang<-output
        
         definisi3D():
         jika sisi1 == sisi2 == sisi3 maka
            bangun kubus<-output
         jika tidak maka
            bangun balok<-output
        
        
*/
/*
    Bangun ruang balok
    Mencari yang terbesar
    Mencari lama waktu
    Menghitung kebutuhan keramik dalam 
*/

#include <iostream>

using namespace std;
//Kamus Global
float L,V,K,sisi1,sisi2,sisi3;

float Luas(float sisiSatu, float sisiDua){
    //Judul: untuk mencari sebuah Luas bangun datar persegi atau balok
    /* Deskripsi : rumus luas persegi <- sisi*sisi rumus luas persegi panjang <- panjang*lebar yang memiliki kesamaan
        antara lain perkalian kedua buah sisi dalam bangun datar */
    //Kamus Lokal
    float Luas = sisiSatu*sisiDua;
    return Luas;
}

float Volume(float luas,float sisiTiga){
    //Judul: untuk mencari sebuah Volume bangun ruang balok atau kubus
    /* Deskripsi : 
        rumus volume kubus <- sisi*sisi*sisi or luas persegi * sisi
        rumus volume balok <- panjang*lebar*tinggi or luas persegi panjang * tinggi
        yang memiliki kesamaan antara lain perkalian ketiga buah sisi yaitu 
        Volume <- panjang sumbu x * panjang sumbu y * panjang sumbu z atau luas persegi/persegi panjang * sumbu z
    */
    //Kamus Lokal
    float Volume = luas*sisiTiga;

    return Volume;
}

float Keliling3D(float sisiSatu, float sisiDua, float sisiTiga){
    //Judul: untuk mencari sebuah Volume bangun ruang balok atau kubus
    /* Deskripsi : 
        rumus volume kubus <- sisi*sisi*sisi or luas persegi * sisi
        rumus volume balok <- panjang*lebar*tinggi or luas persegi panjang * tinggi
        yang memiliki kesamaan antara lain perkalian ketiga buah sisi yaitu 
        Volume <- panjang sumbu x * panjang sumbu y * panjang sumbu z atau luas persegi/persegi panjang * sumbu z
    */
    //Kamus Lokal
    float Keliling = 4*(sisiSatu+sisiDua+sisiTiga);

    return Keliling;
}

void definisi2D(float sisiX, float sisiY){
    //Judul: untuk mencari bentuk dari bangun datar tadi
    /*
       jika sisiX == sisiY maka
            bangun persegi<-output
        jika tidak maka
            bangun persegi panjang<-output
    */
    if(sisiX == sisiY){
        cout << "Bangun datar persegi" << endl;
    }else{
        cout << "Bangun datar persegi panjang" << endl;
    }
}

void definisi3D(float sisiX, float sisiY, float sisiZ){
    //Judul: untuk mencari bentuk dari bangun ruang tadi
    /*
        jika sisiX == sisiY == sisiZ maka
            bangun kubus<-output
         jika tidak maka
            bangun balok<-output
    */
    if((sisiX == sisiY) && (sisiZ == sisiY)){

        cout << "Bangun datar kubus" << endl;
    }else{
        cout << "Bangun datar balok" << endl;
    }
}
int main(){
    cout << "masukan sisi 1 : ";
    cin  >> sisi1;
    cout << "masukan sisi 2 : ";
    cin  >> sisi2;
    
    L = Luas(sisi1,sisi2);
    cout << "Luas : " << L << endl;
    definisi2D(sisi1,sisi2);

    cout << "masukan sisi 3 : ";
    cin  >> sisi3;

    V = Volume(L,sisi3);
    K = Keliling3D(sisi1,sisi2,sisi3);
    cout << "Volume : " << V << endl;
    cout << "Keliling : " << K << endl;
    definisi3D(sisi1,sisi2,sisi3);
}