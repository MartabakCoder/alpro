//Judul : membuat sorting mengurutkan nilai nomor Telepon melalui teknik insertion sort
/*
Author: Rajendra Nohan
Tanggal : 9 April 2022
Kamus:
    arr {
        nama,  <- string
        notelp, <- long integer
        size <- integer
    } phonebook <- tipe absrak
    i <- Integer
Deskripsi:
    phonebook.size <- Masukan
    phonebook.noTelp <- long long int[phonebook.size]
    phonebook.nama <- string[phonebook.size]
    i <- 0 //reset looping
    while (i < phonebook.size) {
        phonebook.nama[i] <- Masukan
        phonebook.noTelp[i] <- Masukan
        i = i + 1;
    }

    //Before
    display(phonebook);
    
    insertionSort(phonebook);//Start Sorting
    
    //After
    display(phonebook);
    
        //Fungsi Insertion Sort 
        Kamus : j , k <- integer
                key <- long long integer
                memoryNama <- string
        Deskripsi : 
            j <- 0; //reset looping
            while (j < arraySort.size){
                k <- j - 1;
                key <- arraySort.noTelp[j];
                memoryNama <- arraySort.nama[j];
                while (k >= 0 && arraySort.noTelp[k] > key){
                    arraySort.nama[k + 1] <- arraySort.nama[k] ;
                    arraySort.noTelp[k + 1] <- arraySort.noTelp[k];
                    k <- k - 1;
                }
                arraySort.nama[k + 1] <- memoryNama ;
                arraySort.noTelp[k + 1] <- key;
                j <- j + 1;
            }

        // Display Fungsi  
            Kamus : a <-integer
            Deskripsi:
                a <-0
                while(a<displayArrs){
                    displayArrs.nama[a] <- Keluaran
                    displayArrs.noTelp[a] <- Keluaran
                    a <- a + 1
                }
*/
#include <iostream>
using namespace std;

//Kamus Global
int i;

struct arr{
    long long int* noTelp;
    string* nama;
    int size;
} phonebook;


void display(struct arr displayArrs)
{
    /*
    Author : Rajendra Nohan
    Kamus : a <-integer
    Deskripsi:
        a <-0
        while(a<displayArrs){
            displayArrs.nama[a] <- Keluaran
            displayArrs.noTelp[a] <- Keluaran
            a <- a + 1
        }
    */
    //Kamus Lokal
    int a = 0;
    while (a<displayArrs.size){
        //Program
            cout <<  "Nama : ";
            cout << displayArrs.nama[a] << endl;
            cout <<  "No Telp : ";
            cout << displayArrs.noTelp[a] << endl;
        //End Program
        a = a + 1; //Counter
    }
}

void insertionSort(struct arr arraySort)
{
    /*
    Author : Rajendra Nohan
    Kamus : j , k <- integer
            key <- long long integer
            memoryNama <- string
    Deskripsi : 
        j <- 0; //reset looping
        while (j < arraySort.size){
            k <- j - 1;
            key <- arraySort.noTelp[j];
            memoryNama <- arraySort.nama[j];
            while (k >= 0 && arraySort.noTelp[k] > key){
                arraySort.nama[k + 1] <- arraySort.nama[k] ;
                arraySort.noTelp[k + 1] <- arraySort.noTelp[k];
                k <- k - 1;
            }
            arraySort.nama[k + 1] <- memoryNama ;
            arraySort.noTelp[k + 1] <- key;
            j <- j + 1;
        }
    */
    //Kamus Lokal
        int j, k;
        long long int key;
        string memoryNama;

        j = 0; //reset looping
        while (j < arraySort.size){
            k = j - 1;
            key = arraySort.noTelp[j];
            memoryNama = arraySort.nama[j];
            while (k >= 0 && arraySort.noTelp[k] > key){
                arraySort.nama[k + 1] = arraySort.nama[k] ;
                arraySort.noTelp[k + 1] = arraySort.noTelp[k];
                k = k - 1;
            }
            arraySort.nama[k + 1] = memoryNama ;
            arraySort.noTelp[k + 1] = key;
            j = j + 1;
        }
}

int main() {
    cout << "Enter Size of an Array: " << endl;
    cin >> phonebook.size;
    phonebook.noTelp = new long long int[phonebook.size];
    phonebook.nama = new string[phonebook.size];
    cout << "-- Menu memasukan data --"<<endl;
    i = 0; //reset looping
    while (i < phonebook.size) {
        cout <<  "Nama : ";
        cin >> phonebook.nama[i];
        cout <<  "No Telp : ";
        cin >> phonebook.noTelp[i];
        i = i + 1;
    }

    cout << endl << endl;
    cout << "-- Menampilkan data telepon (BEFORE)--" << endl;
    display(phonebook);
    
    insertionSort(phonebook);//Start Sorting
    
    cout << endl << endl;
    cout << "-- Menampilkan data telepon (AFTER)--" << endl;
    display(phonebook);
}