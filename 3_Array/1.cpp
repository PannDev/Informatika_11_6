#include<iostream>
#include<cmath>
using namespace std;


void matriksWhile() {

    int matriks[3][5];

    int j = 0;
    while (j < 3) {

        int i = 0;
        while (i < 5) {

            cout << "Isi data [" << j << "][" << i << "] : ";
            cin >> matriks[j][i];

            i++;
        }

        j++;
    }

    j = 0;
    while (j < 3) {

        int i = 0;
        while (i < 5) {

            cout << matriks[j][i] << " ";

            i++;
        }
        cout << endl;

        j++;
    }

}

void cobaYuk() {

    int matrix[3][5];
    // 3 x 5

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5;) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    
    int i = 0;
    while (i < 3) {
        int j = 0;
        while(j < 5) {

        }

    }


}

//! main
int main () { 

    // matriksWhile();

    int x, y;
    cout << "input baris matrix : "; cin >> y;
    cout << "input kolom matrix : "; cin >> x;


    int matriks[y][x];
    
    cout << endl;
    for (int j = 0; j < y; j++) {
        for (int i = 0; i < x; i++) {

            cout << "Isi data [" << j << "][" << i << "] : ";
            cin >> matriks[j][i];

        }
    }

    float sum = 0;
    for (int j = 0; j < y; j++) {
        for(int i = 0; i < x; i++) {
            sum += matriks[j][i];
        }
    }

    float rata = sum / (x*y);

    cout << endl;
    cout << "Jumlah : " << sum << endl;
    cout << "Rata - Rata : " << rata << endl;
    cout << "Pangkat 2 : " << endl;

    int j = 0;
    while (j < y) { // baris

        int i = 0;
        while (i < x) { // kolomm
            cout << pow(matriks[j][i], 2) << " "; i++;
        }

        cout << endl;
        j++;
    }

    // buat determinan 3x 3

    int kiri = 0, kanan = 0;
    for (int i = 0; i < 3; i++) {
        kiri += matriks[i][i];
        kanan -= matriks[i][2-i];
    }

    cout << "Determinan : " << kiri + kanan << endl;



    return 0;
}
