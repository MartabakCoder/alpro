//Judul : membuat sorting mengurutkan nilai dari besar ke kecil menggunakan konsep Quick Sort
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
    quickSort(bil,0,5)
    display(bil, 6)
    
    // Quick Sort Fungsi
       if (rendah < tertinggi)
        {
            iRendah <- (rendah - 1);
            j<- rendah;

            while (j <= tertinggi - 1)
            {
                if (bil[j] < bil[tertinggi])
                {
                    iRendah++;
                    //Swap ketika bilangan j di bawah bilangan terakhir
                    wadah <- bil[iRendah];
                    bil[iRendah] <- bil[j];
                    bil[j] <- wadah;
                    //End Swaping
                }
                j <- j + 1;
            }
            //Swap untuk memisahakan index terakhir ke index terbaru
            wadah <- bil[iRendah + 1];
            bil[iRendah + 1] <- bil[tertinggi];
            bil[tertinggi] <- wadah;
            iPemisah <- (iRendah + 1);
            //End Swaping


            quickSort(bil, rendah, iPemisah - 1); //Sisi Kiri
            quickSort(bil, iPemisah + 1, tertinggi); //Sisi Kanan
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

void quickSort(int bil[], int rendah, int tertinggi){
    /*
    Author : Rajendra Nohan
    Deskripsi:
        if (rendah < tertinggi)
        {
            iRendah <- (rendah - 1);
            j<- rendah;

            while (j <= tertinggi - 1)
            {
                if (bil[j] < bil[tertinggi])
                {
                    iRendah++;
                    //Swap ketika bilangan j di bawah bilangan terakhir
                    wadah <- bil[iRendah];
                    bil[iRendah] <- bil[j];
                    bil[j] <- wadah;
                    //End Swaping
                }
                j <- j + 1;
            }
            //Swap untuk memisahakan index terakhir ke index terbaru
            wadah <- bil[iRendah + 1];
            bil[iRendah + 1] <- bil[tertinggi];
            bil[tertinggi] <- wadah;
            iPemisah <- (iRendah + 1);
            //End Swaping


            quickSort(bil, rendah, iPemisah - 1); //Sisi Kiri
            quickSort(bil, iPemisah + 1, tertinggi); //Sisi Kanan
        }
    */
    //Kamus Lokal
    int iPemisah, iRendah;
    if (rendah < tertinggi)
    {
        
        iRendah = (rendah - 1);
        j= rendah;

        while (j <= tertinggi - 1)
        {
            if (bil[j] < bil[tertinggi])
            {
                iRendah++;
                //Swap ketika bilangan j di bawah bilangan terakhir
                wadah = bil[iRendah];
                bil[iRendah] = bil[j];
                bil[j] = wadah;
                //End Swaping
            }
            j = j + 1;
        }
        //Swap untuk memisahakan index terakhir ke index terbaru
        wadah = bil[iRendah + 1];
        bil[iRendah + 1] = bil[tertinggi];
        bil[tertinggi] = wadah;
        iPemisah = (iRendah + 1);
        //End Swaping


        quickSort(bil, rendah, iPemisah - 1); //Sisi Kiri
        quickSort(bil, iPemisah + 1, tertinggi); //Sisi Kanan
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

    //Quick sort
    quickSort(bil,0,5);

    cout<<"\n";
    cout<<"Output Setelah Sorting\n";
    display(bil, 6);
}