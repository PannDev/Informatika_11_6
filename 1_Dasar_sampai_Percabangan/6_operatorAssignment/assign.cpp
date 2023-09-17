#include<iostream>
using namespace std;

//! main
int main () { 

    double a1, a2, a3, a4, b;
    cout << "masukan nilai a1 : ";  cin >> a1;
    cout << "masukan nilai a2 : ";  cin >> a2;
    cout << "masukan nilai a3 : ";  cin >> a3;
    cout << "masukan nilai a4 : ";  cin >> a4;
    cout << "masukan nilai b : ";  cin >> b;

    a1 += b;
    a2 -= b;
    a3 *= b;
    a4 /= b;

    cout << endl;
    cout << "Hasil a +=  b adalah " << a1 << endl;
    cout << "Hasil a -= b adalah " << a2 << endl;
    cout << "Hasil a *= b adalah " << a3 << endl;
    cout << "Hasil a /= b adalah " << a4 << endl;

    return 0;
}
