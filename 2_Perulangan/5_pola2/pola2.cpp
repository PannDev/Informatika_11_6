#include<iostream>
using namespace std;

//! main
int main () { 

    for (int baris = 3; baris <= 5; baris++) {

        for (int angka = 5; angka >= baris; angka--) {
            cout << angka;
        }

        cout << endl;
    }

    return 0;
}
