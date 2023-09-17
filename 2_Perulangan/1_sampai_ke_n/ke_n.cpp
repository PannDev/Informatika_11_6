#include<iostream>
using namespace std;

//! main
int main () { 

    int sampai;
    cout << "ingin keluarkan dari 1 sampai berapa? ";
    cin >> sampai;
    cout << endl;

    for (int mulai = 1; mulai <= sampai; mulai++) {
        cout << mulai << endl;
    }

    return 0;
}
