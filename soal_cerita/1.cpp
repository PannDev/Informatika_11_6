#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Berapa kandang kambing yang kamu punya? "; cin >> n;

    int banyakKambing = 0;
    int jumlahKambing = 0;

    for (int ke = 1; ke <= n; ke++) {
        cout << "Kandang ke-" << ke << ": ";
        cin >> banyakKambing;
        jumlahKambing = jumlahKambing + banyakKambing;
    }

    cout << "Kamu mempunyai " << jumlahKambing << " kambing dari " << n << " kandang" << endl;



    return 0;
}