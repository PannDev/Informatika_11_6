/*
#include <iostream>
#include <cmath>
using namespace std;

// keliling persegi
float kPersegi(float s) {
    float keliling = 4 * s;
    return keliling;
}

// luas persegi
float lPersegi(float s) {
    float luas = s * s;
    return luas;
}

// keliling dan luas Persegi Panjang
void persegiPanjang(float p, float l) {
    float keliling = 2 * (p + l);
    float luas = p * l;
    cout << "Luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;
}

// Keliling dan luas lingkaran
void lingkaran(float r) {
    float phi = 3.14;
    float keliling = 2 * phi * r;
    float luas = phi * pow(r, 2);
    cout << "Luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;
}

int main () {

    int pilihan;
    cout << "Bidang datar yang mana? " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Mana pilihanmu? (1-3) : "; cin >> pilihan;
    cout << endl;

    if (pilihan == 1) {
        float sisi;
        cout << "sisi : "; cin >> sisi;
        cout << "Keliling : " << kPersegi(sisi) << endl;
        cout << "Luas : " << lPersegi(sisi) << endl;
    } else if (pilihan == 2) {
        float p, l;
        cout << "Panjang : "; cin >> p;
        cout << "Lebar : "; cin >> l;
        persegiPanjang(p, l);
    } else if (pilihan == 3) {
        float jariJari;
        cout << "masukan jari - jari : "; cin >> jariJari;
        lingkaran(jariJari);
    } else {
        cout << "pilihan tidak tersedia" << endl;
    }
    return 0;
}

*/

