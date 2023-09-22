#include <iostream>
using namespace std;

void prob1()
{

    for (int baris = 4; baris >= 1; baris--)
    {

        for (int spasi = baris - 1; spasi >= 1; spasi--)
        {
            cout << " ";
        }
        // (spasi 3x) 4
        // (spasi 2x)34
        // (spasi 1x)234
        // (spasi 0x)1234
        for (int kolom = baris; kolom <= 4; kolom++)
        {
            cout << kolom;
        }

        cout << endl;
    }
}

void prob2()
{
    //    4
    //  4 5 6
    // 4 5 6 7 8
    //   4 5 6 7 8 9 10

    for (int baris = 1; baris <= 4; baris++)
    {

        for (int spasi = 1; spasi <= 4 - baris; spasi++)
        {
            cout << "  ";
        }

        int angka = 4; // base = 4
        for (int kolom = 1; kolom <= baris * 2 - 1; kolom++)
        {
            cout << angka << " ";
            angka++;
            // angka = angka + 1;
        }

        cout << endl;
    }
}

void prob3() {
    /*
    
    *       *     
    * *   * *
    * * * * *
    
    3 baris 5 kolom

    baris 1 mencetak bintang di kolom 1 sama 5 aja

    baris 2 di kolom 1 2 4 5

    baris 3 di semua kolom

    */

    for (int baris = 1; baris <= 3; baris++) {

        for (int kolom = 1; kolom <= 5; kolom++) {

            if (baris == 1) {
                if (kolom == 1 || kolom == 5) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }

            else if (baris == 2) {
                if (kolom == 1 || kolom == 2 || kolom == 4 || kolom == 5) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }

            else if (baris == 3) {
                cout << "*";
            }
            
        }

        cout << endl;
    }


}

//! main
int main()
{
    prob3();

    return 0;
}

