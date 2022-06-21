//Judul: Modul PAP-03
/*
Author : Rajendra Nohan
Tanggal : 11 April 2022
*/
#include <iostream>
#include "pustaka.h"

using namespace std;


int main(){
    //Tugas 1;
    int a = 10, b = 16;
    int c = 20, d = 34;
    int e = 27, f = 41;
    
    cout<<"Tugas 1"<<endl;
    swap_number(&a, &b);
    swap_number(&c, &d);
    swap_number(&e, &f);
    cout<<a<<"\t"<<b<<endl;
    cout<<b<<"\t"<<d<<endl;
    cout<<e<<"\t"<<f<<endl;

    //Tugas 2
    cout<<"Tugas 2"<<endl;
    cout<<sum_of_digits(12345)<<endl;
    cout<<sum_of_digits(4567)<<endl;
    cout<<sum_of_digits(15000)<<endl;
    cout<<sum_of_digits(1450)<<endl;
    
    //Tugas 3
    cout<<"Tugas 3"<<endl;
    print_primes(10);
    cout<<endl;
    print_primes(22);
    cout<<endl;

    //Tugas 4
    cout<<"Tugas 4"<<endl;
    cout<<text_palindrome("tammat")<<endl;
    cout<<text_palindrome("kasur rusak")<<endl;
    cout<<text_palindrome("makan malam")<<endl;
    cout<<text_palindrome("pemrograman")<<endl;

    //Tugas 5
    cout<<"Tugas 5"<<endl;
    cout<<num_palindrome(2002)<<endl;
    cout<<num_palindrome(3030)<<endl;
    cout<<num_palindrome(3401)<<endl;
    cout<<num_palindrome(5555)<<endl;
    
    //Tugas 5
    cout<<"Tugas 5"<<endl;
    print_pascal(4);
    print_pascal(6);
}