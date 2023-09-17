#include<iostream>
using namespace std;

//! main
int main () { 

     int hari; 
    cout << "masukan kode hari : "; cin >> hari;

    switch (hari) {
        case 1:
            cout << "Hari Minggu" << endl;
            break;
        case 2:
            cout << "Hari Senin" << endl;
            break;
        case 3:
            cout << "Hari Selasa" << endl;
            break;
        case 4:
            cout << "Hari Rabu" << endl;
            break;
        case 5:
            cout << "Hari Kamis" << endl;
            break;
        case 6:
            cout << "Hari Jumat" << endl;
            break;
        case 7:
            cout << "Hari Sabtu" << endl;
            break;
        default:
            cout << "Kode hari salah" << endl;
    }

    return 0;
}
