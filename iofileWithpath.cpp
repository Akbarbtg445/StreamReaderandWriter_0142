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
    while (true) {
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris
        getline (cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasuikan nilai dari baris ke dalam file
        outfiles << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfiles.close();
    //membuka file dalam mode membaca 
    ifstream infiles;
    //menunjuk ke sebuah file
}