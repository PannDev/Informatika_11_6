#include<iostream>
using namespace std;

//! main
int main () { 

    int mulai, sampai, ulang;

    cout << "mulai dari berapa ? ";
    cin >> mulai;

    cout << "sampai berapa ? ";
    cin >> sampai;

    for (ulang = mulai; ulang <= sampai; ulang++) {
        cout << ulang << endl;
    }

    return 0;
}
