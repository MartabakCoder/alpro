//Judul: Modul PAP-03
/*
Author : Rajendra Nohan
Tanggal : 11 April 2022
*/
#include <iostream>

using namespace std;

void swap_number(int* num1, int* num2){
    /*
    Author : Rajendra Nohan
    Tanggal: 11 April 2022
    Kamus :
        temp <- integer
    Deskripsi:
        temp <- *num1
        *num1 <- *num2
        *num2 <- temp
    */
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int sum_of_digits(int digit){
    /*
    Author : Rajendra Nohan
    Tanggal: 11 April 2022
    Kamus :
        sum <- integer
        i <- integer
    Deskripsi:
        sum <- 0
        i <- 0
       while (i < to_string(digit).length()) {
        sum <- sum + (int)to_string(digit)[i]-48;
        i <-- i + 1;
    }
        return sum;
    */
    //Kamus Lokal
    int sum = 0, i = 0;
    while (i < to_string(digit).length()) {
        sum = sum + (int)to_string(digit)[i]-48;
        i = i + 1;
    }
    return sum;
}
void print_primes(int num){
    /*
    Author : Rajendra Nohan
    Tanggal: 11 April 2022
    Kamus :
        i <- integer
        j <- integer
        bil <- integer
    Deskripsi:
        i <- 1;
        j <- 1;
        while(i<=num){
            bil <- 0;
            while(j<i){
                if(i%j==0){
                    bil <- bil + 1;
                }
                j <- j + 1; //Looping
            }
            if (bil!=2){
                cout<<i<<", ";
            }
                
            i <- i + 1; //Looping
        }
        return sum;
    */
    //Kamus Lokal
    int i , j,bil;
    i = 1;
    j = 1;
    while(i<=num){
        bil = 0;
        while(j<i){
			if(i%j==0){
				bil = bil + 1;
			}
            j = j + 1; //Looping
		}
        if (bil!=2){
            cout<<i<<", ";
        }
            
		i = i + 1; //Looping
    }
}
int text_palindrome(string text){
    /*
    Author : Rajendra Nohan
    Tanggal: 11 April 2022
    Kamus :
        i <- integer
    Deskripsi:
        i <- 0;
        while (i < text.length() / 2) {
            if (text[i] != text[text.length() - i - 1]) {
                return 0;
            }
            i = i + 1;
        }
        return 1;
    */
    //Kamus Lokal
    int i;

    i = 0;
    while (i < text.length() / 2) {
        if (text[i] != text[text.length() - i - 1]) {
            return 0;
        }
        i = i + 1;
    }
    return 1;
}
int num_palindrome(int num){
    /*
    Author : Rajendra Nohan
    Tanggal: 11 April 2022
    Kamus :
        i <- integer
        numS <- string
    Deskripsi:
        i <- 0;
        numS <- to_string(num); //Konversi Variable
        for (i < numS.length() / 2) {
            if (numS[i] != numS[numS.length() - i - 1]) {
                return 0;
            }
            i <- i + 1;
        }
        return 1;
    */
    //Kamus Lokal
    int i;
    string numS; 
    
    i = 0;
    numS = to_string(num); //Konversi Variable
    while (i < numS.length() / 2) {
        if (numS[i] != numS[numS.length() - i - 1]) {
            return 0;
        }
        i = i + 1;
    }
    return 1;
}
void print_pascal(int row){
    /*
    Author : Rajendra Nohan
    Tanggal: 11 April 2022
    Kamus :
        pascal, spasi,i,j <- integer
    Deskripsi:
        pascal <- 1;
        i <- 0;
        space <- 1;

        while(i < row) {
            space <- 1;
            while (space <= row - i){
                cout<<"  ";
                space <- space + 1;
            }
            for (j = 0; j <= i; j++) {
                if (j == 0 || i == 0){
                    pascal <- 1;
                }
                else{
                    pascal <- pascal * (i - j + 1) / j;
                }
                cout<<"    "<<pascal;
            }
            cout<<"\n";
            i <- i + 1;//Looping
        }
    */
    //Kamus Lokal
    int pascal, space, i, j;
    
    pascal = 1;
    i = 0;
    space = 1;

    while(i < row) {
        space = 1;
        while (space <= row - i){
            cout<<"  ";
            space = space + 1;
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0){
                pascal = 1;
            }
            else{
                pascal = pascal * (i - j + 1) / j;
            }
            cout<<"    "<<pascal;
        }
        cout<<"\n";
        i = i + 1;//Looping
   }
}