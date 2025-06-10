#include <iostream>
#include <array>
#include <exception>
using namespace std;

int main (){
cout << "awal program" << endl;
try{
    array<int,3> data={10,20,30};
    cout << data.at(5)<< endl;
}
catch (exception&e) {
    //penangkap menngunakan obyek exception
    cout << e.what() << endl;
    //akan dieksekusi karena array data hanya memiliki 3 elemen 
}
cout << "Baris Program yang terakhir" << endl;
return 0;
}