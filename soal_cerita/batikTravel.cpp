#include<iostream>
using namespace std;

int main () { 

    int biayaCB = 200000;
    int biayaCJ = 250000;
    int biayaTol = 100000;
    int biayaJemput = 20000;
    int total = 0;

    cout<< "Selamat Datang Batik Travel" << endl;

    string nama;
    cout << "Nama : "; cin >> nama;

    int umur;
    cout << "Umur : "; cin >> umur;

    string alamat;
    cout << "Alamat : "; cin >> alamat;
    cout << endl;

    int rutePerjalanan;
    cout << "Pilih Rute Perjalanan : " << endl;
    cout << "1. Cirebon - Bandung" << endl;
    cout << "2. Cirebon - Jakarta" << endl;
    cout << "rute (1/2): "; cin >> rutePerjalanan;

   

    string tol, jemput;
    cout << "Apakah melewati jalan tol? (ya/tidak) "; cin >> tol;
    cout << "Apakah ingin dijemput di rumah? (ya/tidak) "; cin >> jemput;

    switch (rutePerjalanan)
    {
    case 1:
        if (tol == "ya" && jemput == "ya") {
            total = biayaTol + biayaCB + biayaJemput;
        } else if (tol == "ya") {
            total = biayaTol + biayaCB;
        } else if (jemput == "ya") {
            total = biayaJemput + biayaCB;
        } else {
            total = biayaCB;
        }
        break;
    
    case 2:
        if (tol == "ya" && jemput == "ya") {
            total = biayaTol + biayaCJ + biayaJemput;
        } else if (tol == "ya") {
            total = biayaTol + biayaCJ;
        } else if (jemput == "ya") {
            total = biayaJemput + biayaCJ;
        } else {
            total = biayaCJ;
        }
        break;
        default:
        cout << "input tidak valid";
        break;
    }

    cout << "Data Pelanggan : " << endl;
    cout << "Nama : " << nama;
    cout << "umur : " << umur;
    cout << "alamat : " << alamat;
    cout << "Rute Perjalanan : ";
    if (rutePerjalanan == 1) {
        cout << "Cirebon - Bandung";
    } else if (rutePerjalanan == 2) {
        cout << "Cirebon - Jakarta";
    }


    


    return 0;
}
