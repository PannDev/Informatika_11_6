#include<iostream>
using namespace std;

//! main
int main () { 

    int usia;
    cout << "usia : "; cin >> usia;

    if (usia < 0) {
        cout << "usia tidak boleh negatif" << endl;
    }
    else if (usia >= 0 && usia <= 5) {
        cout << "balita" << endl;
    } else if (usia >5 && usia <= 11) {
        cout << "anak - anak" << endl;
    } else if (usia > 11 && usia <= 16) {
        cout << "remaja awal" << endl;
    } else if(usia > 16 && usia <= 25) {
        cout << "remaja akhir" << endl;
    } else if (usia > 25 && usia <= 35) {
        cout << "dewasa awal" << endl;
    } else {
        cout << "lansia" << endl;
    }

    return 0;
}
