//Judul : membuat sorting mengurutkan nilai dari besar ke kecil menggunakan konsep Maximum Sort
/*
Author: Rajendra Nohan
Tanggal : 2 April 2022
Kamus:
    bil[1..6] <--integer
    wadah,i,j,k,l <--integer
Deskripsi:
    Inputan
    i<--0
    while(i<6){
        input bil[i]
        i <-- i + 1
    }
    display(bil, 6)
    maximumSort(bil,6)
    display(bil, 6)
    
    // Maximum Sort Fungsi
       //Kamus Lokal
        iMax <- integer
        
        j <- 0;
        while (j < n - 1) {
            iMax <- j;
            k <- j + 1;
            while (k < n) {

                if (bil[k] > bil[iMax]){
                    iMax <- k;
                }
                k <- k + 1;
            }
            wadah <- bil[iMax];
            bil[iMax] <- bil[j];
            bil[j] <- wadah;
            j <- j + 1;
        }

    // Display Fungsi  
        a<--0
        while(a<n){
            output bil[a]
            a <-- a + 1
        }
    
*/
#include <iostream>

using namespace std;

//Kamus Global
int bil[6];
int wadah,i,j,k;

void display(int tangkap[], int n)
{
    /*
    Author : Rajendra Nohan
    Deskripsi:
        a<--0
        while(a<n){
            output bil[a]
            a <-- a + 1
        }
    */
    //Kamus Lokal
    int a = 0;
    while (a<n){
        //Program
            cout << tangkap[a] << endl;
        //End Program
        a = a + 1; //Counter
    }
}

void maximumShort(int bil[], int n){
    /*
    Author : Rajendra Nohan
    Deskripsi:
        //Kamus Lokal
        iMax <- integer
        
        j <- 0;
        while (j < n - 1) {
            iMax <- j;
            k <- j + 1;
            while (k < n) {

                if (bil[k] > bil[iMax]){
                    iMax <- k;
                }
                k <- k + 1;
            }
            wadah <- bil[iMax];
            bil[iMax] <- bil[j];
            bil[j] <- wadah;
            j <- j + 1;
        }
    */
    //Kamus Lokal
    int iMax;
    j = 0;
    while (j < n - 1) {
        iMax = j;
        k = j + 1;
        while (k < n) {

            if (bil[k] > bil[iMax]){
                iMax = k;
            }
            k = k + 1;
        }
        wadah = bil[iMax];
        bil[iMax] = bil[j];
        bil[j] = wadah;
        j = j + 1;
  }
}

int main(){
    
    cout<<"Inputan\n";
    //Inputan
    i = 0;
    while(i<6){
        cin>>bil[i];
        i++;
    }
    
    cout<<"\n";
    cout<<"Output Sebelum\n";
    display(bil, 6);

    //maximum sort
    maximumShort(bil,6);

    cout<<"\n";
    cout<<"Output Setelah Sorting\n";
    display(bil, 6);
}