//Judul : membuat sorting selection sort
/*
Author: Rajendra Nohan
Tanggal : 11 April 2022
Kamus:
    wadah <- integer
    i, n, j, tukar, A[100] <-integer
Deskripsi:
    Input(n);

    i <- 0; //reset loop
    while (i < n) {
        Input(A[i]);
        i <- i + 1;
    }


    i <- 0;//reset looping
    // lihat hasil
    while(i < n){
       Output(A[i]);
        i <- i + 1;
    }

    //Fungsi Selection Sort
        Kamus : a <-integer
        Deskripsi:
            a <-0
            while (a < n-1) {
                tukar <- a;
                j <- a + 1;
                while (j < n){
                    if(A[j] < A[tukar])
                    {
                        tukar <- j;
                    }
                    j <- j + 1;
                }   
                wadah <- A[tukar];
                A[tukar] <- A[a];
                A[a] <- wadah;
                a <- a + 1;
            }
*/
#include<iostream>
using namespace std;

// Kamus Global
int wadah;
int i, n, j, tukar, A[100];

void selectionSort(int A[]){
    /*
    Author : Rajendra Nohan
    Kamus : a <-integer
    Deskripsi:
        a <-0
        while (a < n-1) {
            tukar <- a;
            j <- a + 1;
            while (j < n){
                if(A[j] < A[tukar])
                {
                    tukar <- j;
                }
                j <- j + 1;
            }   
            wadah <- A[tukar];
            A[tukar] <- A[a];
            A[a] <- wadah;
            a <- a + 1;
        }
    */
    //Kamus Lokal
    int a = 0;
    while (a < n-1) {
        tukar = a;
        j = a + 1;
        while (j < n){
            if(A[j] < A[tukar])
            {
                tukar = j;
            }
            j = j + 1;
        }   
        wadah = A[tukar];
        A[tukar] = A[a];
        A[a] = wadah;
        a = a + 1;
    }
}

int main() {
    cout << "Masukkan jumlah data: ";
    cin >> n;

    i = 0; //reset loop
    while (i < n) {
        cout << "Data ke-" << i + 1 << " = " ;
        cin >> A[i];
        cout << endl;
        i = i + 1;
    }

    selectionSort(A);

    i = 0;//reset looping
    // lihat hasil
    while(i < n){
        cout << A[i] << " ";
        i = i + 1;
    }
    return 0;
}