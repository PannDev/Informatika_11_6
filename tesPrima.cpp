#include<iostream>
using namespace std;

void cara1() {
    // time complexity : O(n * sqrt(n))
    // memeriksa semua pembagi yang mungkin untuk setiap bilangan.

    int n; cout << "n : "; cin >> n;

    int genap = 20, bilPrima = 2; 

    for (int bilanganPrima = 1; bilanganPrima <= n; bilanganPrima++) {
        bool prima = true;

        // if (bilPrima <= 1) prima = false;
        if (bilPrima <= 3) prima = true;
        else if (bilPrima % 2 == 0 || bilPrima % 3 == 0) prima = false;
        
        /*
        else {
            for (int pembagi = 2; pembagi * pembagi <= bilPrima; pembagi++) {
                if (bilPrima % pembagi == 0) {
                    prima = false;
                    break; // mengurangi jumlah iterasi yang diperlukan untuk menemukan bilangan prima
                }
            }
        }
        */

        if (prima) {
            cout << bilPrima << " " << genap << " ";
            genap += 2;
        }

        bilPrima++;
        
    } // end for

    cout << endl << endl;

}

void cara2() {
    // time complexity : O(n * n^2)
    // memeriksa semua pembagi untuk setiap bilangan.

    int n; cout << "n : "; cin >> n;

    int genap = 20;

    for (int bilPrima = 1; bilPrima <= n; bilPrima++) {
    int banyakPembagi = 0;

        for (int bilGenap = 1; bilGenap <= bilPrima; bilGenap++) {
            if (bilPrima % bilGenap == 0) banyakPembagi++;
        }

        if (banyakPembagi == 2) {
            cout << bilPrima << " " << genap << " ";
            genap += 2;
        }
    }

    cout << endl << endl;
}
int main() { 
    int t; cout << "t : "; cin >> t;
    while (t--) {
    
    int x; cout << "cara ke berapa : "; cin >> x;

    switch(x) {
        case 1: cara1(); break;
        case 2: cara2(); break;
    }
    
    
    }
    return 0;
}
