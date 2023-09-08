#include<iostream>
using namespace std;
#define PHI 3.14

//! main
int main () { 

    double r; 
    cout << "masukan nilai jari - jari : "; cin >> r;

    double L = PHI * r * r;
    cout << "luas lingkaran " << L << endl;

    return 0;
}
