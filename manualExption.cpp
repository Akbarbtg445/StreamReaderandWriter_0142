#include<iostream>
using namespace std;
int main ()
{
    try {
        cout << "Selamat Belajar dari prodi Ti UMY" << endl;
        throw 0.5;
        cout  << "Pernyataan tidak akan di eksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    catch (...) {
        //jika selain int maka block ini akan di eksekusi
cout << "default pengecualian di eksekusi" << endl;
    }
    return 0;
}