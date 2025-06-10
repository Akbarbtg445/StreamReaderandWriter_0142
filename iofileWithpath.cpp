#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;
    string Namafiles;
    cout << "masukan Nama Files :";
    cin >> Namafiles;
    //Membuka file dalam mode menulis
    ofstream outfiles;
    //menunjuk ke sebuah nama file 
    outfiles.open(Namafiles + ".txt",ios ::out);
    cout << ">= Menulis file \'n\' Untuk keluar" << endl;
    //unlimited loop untuk menulis
    outfile.close();
}