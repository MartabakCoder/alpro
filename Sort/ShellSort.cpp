//Judul : membuat sorting mengurutkan nilai dari besar ke kecil menggunakan konsep Shell Sort
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
    shellSort(bil,6)
    display(bil, 6)
    
    // shell Sort Fungsi
        j <- n/4;

        while (j > 0)
        {
            k <- j;
            while (k < n)
            {
                int wadah <- bil[k];
    
                l <- k;           
                while (l >= j && bil[l - j] < wadah){
                    bil[l] <- bil[l - j];
                    l <- l - j; //Counter
                }
                bil[l] <- wadah;
                k <- k + 1; //Counter
            }
            j <- j/4;//Counter
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
int wadah,i,j,k,l;

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

int shellSort(int bil[], int n)
{
    /*
    Author : Rajendra Nohan
    Deskripsi : 
        j <- n/2;

        while (j > 0)
        {
            k <- j;
            while (k < n)
            {
                int wadah <- bil[k];
    
                l <- k;           
                while (l >= j && bil[l - j] < wadah){
                    bil[l] <- bil[l - j];
                    l <- l - j; //Counter
                }
                bil[l] <- wadah;
                k <- k + 1; //Counter
            }
            j <- j/2;//Counter
        }
    */
    //Kamus Lokal
    j = n/4; //Terserah mau apa tapi saya pakai gap 4

    while (j > 0)
    {
        k = j;
        while (k < n)
        {
            int wadah = bil[k];
 
            l = k;
            //Descending saya pakainya           
            while (l >= j && bil[l - j] < wadah){
                bil[l] = bil[l - j];
                l = l - j; //Counter
            }
            bil[l] = wadah;
            k = k + 1; //Counter
        }
        j = j/4;//Counter
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

    //shell sort
    shellSort(bil,6);

    cout<<"\n";
    cout<<"Output Setelah Sorting\n";
    display(bil, 6);
}