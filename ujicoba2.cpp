#include <iostream>

using namespace std;

//Kamus Global
int bil[4];
int wadah,x,y,z;

int main(){
    cout<<"Inputan";
    //Inputan
    x = 0;
    while(x<4){
        cin>>bil[x];
        x++;
    }
    cout<<"\n\n\n";
    cout<<"Output Sebelum\n";
    //Output
    x = 0;
    while(x<4){
        cout<<bil[x]<<endl;
        x++;
    }
    y=0;
    while(y<=3){
        z = y+1;
        while(z<=4){
            if(bil[y]<bil[z]){
                wadah = bil[y];
                bil[y] = bil[z];
                bil[z] = wadah;
                wadah = 0;
            }
            z = z+1;
        }
        y = y+1;
    }
    cout<<"\n\n\n";
    cout<<"Output Setelah Sorting\n";
    //Output
    x = 0;
    while(x<4){
        cout<<bil[x]<<endl;
        x++;
    }
}