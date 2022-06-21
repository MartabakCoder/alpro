#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Kompetisi {
    public:
	string namaTim;
	int id,menang, seri, kalah;
    int gol, kebobolan;
    
    void inputData(){
        cout<<"Id Tim : ";
        cin>>this->id;
        cout<<"Nama Tim : ";
        cin>>this->namaTim;
        cout<<"Jumlah menang : ";
        cin>>this->menang;
        cout<<"Jumlah seri : ";
        cin>>this->seri;
        cout<<"Jumlah kalah : ";
        cin>>this->kalah;
        cout<<"Jumlah Kebobolan : ";
        cin>>this->kebobolan;
        cout<<"Jumlah Gol : ";
        cin>>this->gol;
    }

    char namaFile[30] = "kompetisi.dat" ;
    
    void simpanData() {
        Kompetisi Laliga;
        Laliga.inputData();

        //proses simpan objek ke file
        ofstream f;
        f.open(namaFile, ios::binary|ios::app);
        f.write((char*) &Laliga, sizeof(Laliga));
        f.close();
    }

    void bacaData(){
        Kompetisi Laliga;
        ifstream f;
        f.open( namaFile, ios::binary );
            cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";
            cout << "| Nama Tim                  | Menang   | Seri     | Kalah    |   Gol    |  Kegolan | Selisih Gol | Point    |\n";
            cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";  
        while (f.read((char*)&Laliga, sizeof(Laliga))) {
            Laliga.outputData();
        }
        cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";
        f.close();
    }
    void outputData(){
        cout << "| " << setiosflags(ios::left) << setw(25) << this->namaTim << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->menang << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->seri << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->kalah << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->gol << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->kebobolan << " | ";
        cout << setiosflags(ios::left) << setw(11) << this->selisihGol(this->gol,this->kebobolan) << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->point(this->menang,this->seri,this->kalah) << " |\n";
    }
    
    int point(int menangP,int seriP, int kalahP){
        return (menangP*3)+(seri*1)+(kalah*0);
    }
    int selisihGol(int golM,int kegolanM){
        return this->gol-this->kebobolan;
    }

    void sortingKlasmen(){

    }

    void showKlasmen(){

    }

    void updateData(int idTim){
        Kompetisi Laliga;
        fstream f;
		f.open(namaFile, ios::in|ios::out);
        cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";
            cout << "| Nama Tim                  | Menang   | Seri     | Kalah    |   Gol    |  Kegolan | Selisih Gol | Point    |\n";
            cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";  
        while (f.read((char*) &Laliga, sizeof(Laliga))) {
           if(Laliga.id == idTim){
                Laliga.outputData();
                //input data baru
                cout << "Silahkan masukkan data baru" << endl;
                Laliga.inputData();
                int pos = -1 * sizeof(Laliga);
                f.seekp(pos, ios::cur);
                f.write ( (char*) &Laliga, sizeof(Laliga));
                break;
            }
        }
        f.close();
    }

    void cariData(){

    }

    void resetData(){

    }

    void deleteData(){

    }
};

class Menu{
    public:
    Kompetisi laLiga;
    void showMenu(){
        cout << "\t==========================================================================================\n";
        cout << "\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PROGRAM KOMPETISI <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n";
        cout << "\t------------------------------------------------------------------------------------------\n";
        cout << "\t|                            1. Input Data Klub                                          |\n";
        cout << "\t|                            2. Edit Data Klub                                           |\n";
        cout << "\t|                            3. Cari Data Klub                                           |\n";
        cout << "\t|                            4. Tampilkan Klasemen                                       |\n";
        cout << "\t|                            5. Urutkan Klasemen                                         |\n";
        cout << "\t==========================================================================================\n";
    }
    int menuInput(){
        Kompetisi laLiga;
        int pilih;
        cout << "\tMasukkan Pilihan : ";
        cin >> pilih;

        switch(pilih){
            case 1:
                laLiga.simpanData();
                break;
            case 2:
                //laLiga.updateData(int idTim);
                break;
            case 3:
                laLiga.cariData();
                break;
            case 4:
                laLiga.bacaData();
                break;
            case 5:
                return 0;
                break;
            default:
                cout << "\n\tPilihan Anda salah." << endl;
                break;
        }

    }
    void menuEdit(){

    }
    void menuSearch(){

    }
    void menuTampil(){

    }
    void menuDelete(){

    }
    void menuError(){

    }
};

int main(){

    Kompetisi laLiga;
    Menu menu;

    int dataUpdate;

    // cout <<"Menulis ke file \n";
    // laLiga.simpanData();

    cout <<"\nMembaca dari file \n";
    laLiga.bacaData();

    // cout<<"\nMerubah data tim\n";
    // cout<<"Masukan ID dari tim : ";
    // cin>>dataUpdate;
    // laLiga.updateData(dataUpdate);

    while(1){
        menu.showMenu();

        menu.menuInput();

    }
	return 0;
}