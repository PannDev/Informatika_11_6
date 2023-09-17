#include<iostream>
using namespace std;

//! main
int main () { 

    int tahun; cin >> tahun;

    if (tahun % 4 == 0) {
        cout << "Tahun Kabisat" << endl;
    } else {
        cout << "Bukan Tahun Kabisat" << endl;
    }

    return 0;
}
