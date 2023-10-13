#include<iostream>
using namespace std;

//* 1
/*
1 
1 2 
1 2 3 
*/

//* 2
/*
1 2 3
1 2
1
*/

//! 3
/*
3
3 2 
3 2 1 
*/

//! 4
/*
1 
1 2 
1 2 3 
*/
//! 5
/*
1 
1 2 
1 2 3 
*/

void pola1() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        for (int enter = 1; enter <= n; enter++) {
            for (int angka = 1; angka <= enter; angka++) {
                cout << angka << " ";
            }
            cout << endl;
        }
    
    }
}

void pola2() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        for (int enter = n; enter >= 1; enter--) {
            for (int angka = 1; angka <= enter; angka++) {
                cout << angka << " ";
            }
            cout << endl;
        }
    
    }
}

void pola3() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        for (int enter = n; enter >= 1; enter--) {
            for (int angka = n; angka >= enter; angka--) {
                cout << angka << " ";
            }
            cout << endl;
        }
    
    }
}

void pola4() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        for (int enter = n; enter >= 13; enter--) {
            for(int angka = enter; angka >= 13; angka--) {
                cout << angka << ' ';
            }
            cout << endl;
        }
    
    }
}

void pola5() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        for (int enter = 1; enter <= n; enter++) {

            for (int spasi = n; spasi >= enter; spasi--) {
                cout << " ";
            }
            for (int angka = 1; angka <= enter; angka++) {
                cout << "*";
            }
            cout << endl;
        }
    
    }

}

void pola6() {
int t; cout << "t : "; cin >> t;
while (t--) {

    int n; cout << "n : "; cin >> n;
    int mulai =1;
    for (int baris = 1; baris <= n; baris++) {
        for (int angka = 1; angka <= baris; angka++) {
            cout << mulai << " ";
            mulai++;
        }
        cout << endl;
    }

}
}

void pola8() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        int mulai = 1;

        for(int enter = 1; enter <= n; enter++) {
            for(int angka = 1; angka <= enter; angka++) {
                cout << mulai++ << " ";
            }
            cout << endl;
        }
    
    }
}

void solve() {
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        for (int enter = n; enter >= 13 ; enter-=3) {
            for (int angka = enter; angka >= 13 && angka >= enter - 2; angka--) {
                cout << angka << " ";
            }
            cout << endl;
        }
    
    }
}

void prob() {
    // create fibbonanci
    /*
    
    0
    1 1
    2 3 5
    8 13 21 34

    */

    int t; cout << "t : "; cin >> t;
    while (t--) {
    
        int n; cout << "n : "; cin >> n;
        int a = 0, b = 1, c = 0;
        for (int enter = 1; enter <= n; enter++) {
            for (int angka = 1; angka <= enter; angka++) {
                cout << c << " ";
                a = b;
                b = c;
                c = a + b;
            }
            cout << endl;
        }
    
    }

}

void minMax() {
    // create min max


}

//! main
int main () { 

    system("clear"); prob();

    return 0;
}


