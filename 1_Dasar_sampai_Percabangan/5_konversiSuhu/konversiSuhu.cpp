#include<iostream>
using namespace std;

//! main
int main () { 

    double c, k, f, r;
    string konversi;
    cout << "masukan celcius : "; cin >> c;
    cout << "mau konversi kemana? (K,F,R) : "; cin >> konversi;

    if (konversi == "R") {
        r = c * 0.8;
        cout << "suhu reamur = " << r << endl;
    } else if (konversi == "F") {
        f = (c * 1.8) + 32;
        cout << "suhu fahrenheit = " << f << endl;
    } else if (konversi == "K") {
        k = c + 273.15;
        cout << "suhu kelvin = " << k << endl;
    } else {
        cout << "input salah\n";
    }

    return 0;
}
