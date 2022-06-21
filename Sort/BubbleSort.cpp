//Judul : membuat sorting mengurutkan nilai dari besar ke kecil menggunakan konsep Bubble Sort
/*
Author: Rajendra Nohan
Tanggal : 29 Maret 2022
Kamus:
    bil[1..6] <--integer
    wadah,i,j,k <--integer
Deskripsi:
    Inputan
    i<--0
    while(i<6){
        input bil[i]
        i <-- i + 1
    }
    display(bil, 6)
    bubbleSort(bil,6)
    display(bil, 6)
    
    // Bubble Sort Fungsi
        j <-- 0
        while(j < 3){
            k <-- j+1
            while(k < 6){
                if (bil[j] > bil[k]) then
                    // bertukar
                    wadah <-- bil[j]
                    bil[j] <-- bil[k]
                    bil[k] <-- wadah
                k <-- k + 1
            }
            j <-- j+1
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

int bubbleSort(int bil[], int n)
{
    /*
    Author : Rajendra Nohan
    Deskripsi : 
        j <-- 0
        while(j < n-1){
            k <-- j+1
            while(k < 6){
                if (bil[j] > bil[k]) then
                    // bertukar
                    wadah <-- bil[j]
                    bil[j] <-- bil[k]
                    bil[k] <-- wadah
                k <-- k + 1
            }
            j <-- j+1
        }
    */
    //Kamus Lokal
    j = 0;

    while(j<n-1){
        k = j+1;
        while(k<n){
            if(bil[j]<bil[k]){
                wadah = bil[j];
                bil[j] = bil[k];
                bil[k] = wadah;
                wadah = 0;
            }
            k = k+1;
        }
        j = j+1;
    }
    return 0;
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

    //Bubble sort
    bubbleSort(bil,6);

    cout<<"\n";
    cout<<"Output Setelah Sorting\n";
    display(bil, 6);
}