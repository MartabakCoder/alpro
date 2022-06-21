/*
Judul : Mencari nilai tertinggi dari sebuah masukan
Author : Rajendra Nohan
Tanggal : 17 Maret 2022 
Deskripsi : Mencari nilai tertinggi dari sebuah masukan dan di pisah dengan " " spasi untuk penilaiannya
Kamus:
        memoriNilai<- array "untuk menyimpan masukan tadi kedalam sebuah array"
        inputNilai<- string "untuk menyimpan nilai masukan C++"
        nilMax <- integer "menyimpan hasil maksimal"
Notasi : utama():
         inputNilai <- input
         memoriNilai <- delimiter(inputNilai)
         nilMax <- maxSearch(memoriNilai)
         nilMax <- Output
         
         delimiter(inputan): *untuk memisahkan string dan menyimpannya ke sebuah array
         Lokal Kamus
         temp "menyimpan variable sebelum di temukannya karakter spasi"<-string
         memoriNilaiLokal "menyimpan semua hasil yang telah di temukan pemisahnya spasi"<-array
         return memoriNilaiLokal;

         maxSearch(memori): *untuk mencari nilai tertinggi
         Lokal Kamus
         nilaiMax "Menyimpan nilai tertinggi" <- integer
         return nilai Max
*/
#include<iostream>
#include<vector>

using namespace std;

//Kamus Global
vector<int> memoriNilai;
string inputNilai;
int nilMax;

vector<int> delimiter(string inputan){
    // Judul : Fungsi pemisahan string menjadi sebuah array
    /* Deskripsi :
        perulangan dari 0 hingga jumlah char dalam variable inputan:
            jika inputan[i] == ' ' atau telah menemukan char spasi maka:
                memoriNilaiLokal.pushback(stoi(temp))
                    *pushback artinya memasukan nilai ke array yang paling belakang
                    *stoi artinya mekonversi string ke bentuk integer
                temp = ""
                    *mereset temp menjadi kosong semula
            jika tidak maka:
                temp.push_back(inputan[i]);
                    *pushback menyimpan nilai char ke string temp yang paling belakang
            return memoriNilaiLokal;
    */
    //Kamus Lokal
    string temp = "";
    vector<int> memoriNilaiLokal;
    int i = 0; //variable untuk perulangan
        while(i<inputan.length()){
            if(inputan[i]==' '){
                memoriNilaiLokal.push_back(stoi(temp));
                temp = "";
            }
            else{
                temp.push_back(inputan[i]);
            }
            i++;
        }
        memoriNilaiLokal.push_back(stoi(temp));//define terakhir soalnya pada bil terakhir jarang ya memasukan spasi
    return memoriNilaiLokal;
}

int maxSearch(vector<int> memori){
    // Judul : Fungsi mencari nilai terbesar
    /* Deskripsi :
        nilaiMax <- 0 *default terkecil
        perulangan dari 0 hingga jumlah array dalam variable memori:
            jika nilaiMax <= memori[i] *untuk menemukan bilangan dari nilaiMax:
                nilaiMax = memori[i];
                    *nilai terbesar tadi di simpan kembali ke variable nilaiMax
            return memoriLokal;
    */
    //Kamus Lokal
    int nilaiMax = 0;
    int i = 0; //variable untuk perulangan
	while(i<(memori.size())){
		if(nilaiMax<memori[i]){
            nilaiMax = memori[i];
        }
        i++;
    }
    return nilaiMax;
}

int main() {
	
	cout<<"Input Nilai: ";
    getline(cin, inputNilai);
    memoriNilai = delimiter(inputNilai);
    nilMax = maxSearch(memoriNilai);
    cout<<"Nilai maksimalnya ialah : "<<nilMax<<endl;
	
}