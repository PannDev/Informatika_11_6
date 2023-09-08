#include<iostream>
using namespace std;

//! main
int main () { 

    int angka;
    cout << "masukan angka : "; cin >> angka;

    if (angka % 2 == 0) {
        cout << "Genap" << endl;
    } else {
        cout << "Ganjil" << endl;
    }

    return 0;
}
