#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string baris ;
    //Membuat file dalam mode menulis.
    ofstream outfile;
    //Menunjuk ke sebuah nama file

    outfile.open ("contohfile.txt");
    cout << "Menulis file,\'q\' untuk keluar" << endl;
    //unlimited loop untuk Menulis
    while (true) {
        cout << "- ";
        //Mendapatkan setiap karakter dalam satu baris
        getline (cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris =="q") break;
        //menulis dan memasukan nilai dari "baris" ke dalam file
        outfile << baris << endl; 
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka 
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline (infile,baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    //jika tidak di temukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}