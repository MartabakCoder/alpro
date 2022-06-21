// judul : mencari yang terbesar 
// dengan variable biasa dan variable array
// amati 2 function berbeda 
// 29 maret 2022
#include<iostream>
using namespace std;

// kamus global
int bil1, bil2, bil3,bil4;  // amati dan cermati
int bilangan[4];            // dengan array
int terbesar(int, int);

// fungsi terbesar()
int terbesar(int x, int y)
{
    // kamus local 
    int terbesar;
    // diskripsi
    if (x > y) 
        {   terbesar = x;
        }
    else
        {   terbesar = y;
        }    
    return terbesar;
}

int sequentialSearch(int *array, int maxIndex, int dicari)
{   
    // kamus lokal
    int i;
    
    //diskripsi 
    i = 0;
    while (i < maxIndex)
        {
            if (array[i] == dicari)
		    {
			    return i-1;
		    }
            i = i + 1;
        }
    return -1;
}


//fungsi utama 
int main()
{
    // kamus local 
    int GEDHE, GEDHEBANGET, x, dicari, maksimumIndex, index;
    cout << "masukan bilangan ke 1 ";    cin >> bil1; 
    cout << "masukan bilangan ke 2 ";    cin >> bil2;
    cout << "masukan bilangan ke 3 ";    cin >> bil3;
    cout << "masukan bilangan ke 4 ";    cin >> bil4;
    
    GEDHE =(terbesar(terbesar(bil1, bil2),(terbesar (bil3, bil4))));
    cout << "yang terbesar adalah " << GEDHE << endl;
    
    cout << "masukan bilangan ke dalam array " << endl;
    x = 0;
    while (x < 4)
    {
        cout << "masukan bilangan ke  " << x << " ";
        cin >> bilangan[x];
        x = x + 1;
    }
    
    maksimumIndex = 3;
    cout << "masukan angka yang akan di cari" ;
    cin >> dicari;
    
    index = sequentialSearch(bilangan, maksimumIndex, dicari);
	if (index != -1)
	{   cout << "\nAngka ditemukan di lokasi / index ke: " << index + 1;
	}
	else
	{   cout << "\nAngka tidak ditemukan";
	}
    return 0;
}