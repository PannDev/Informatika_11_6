#include <iostream>
using namespace std;

void soal1(), soal2(), soal3(), soal4();

//! main
int main()
{

    // int t; cout << "t : "; cin >> t;
    // while (t--) {

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        soal1();
        break;
    case 2:
        soal2();
        break;
    case 3:
        soal3();
        break;
    case 4:
        soal4();
        break;
    }

    // }

    return 0;
}

void soal1()
{

    for (int i = 4; i >= 1; i--)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = i; k <= 4; k++)
        {
            cout << k;
        }

        cout << endl;
    }
}

void soal2()
{

    for (int i = 1; i <= 4; i++)
    {
        int angka = 4;
        for (int j = 1; j <= 4 - i; j++)
        {

            cout << "  ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << angka << " ";
            angka++;
        }

        cout << endl;
    }
}

void soal3()
{

   for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {

            if (i == 1 ) {
                if (j == 1 || j == 5) cout << "*";
                else cout << " ";
            }
            else if (i == 2) {
                if (j == 1 || j == 2 || j == 4 || j == 5) cout << "*";
                else cout << " ";
            }
            else if (i == 3) cout << "*";

        }

        cout << endl;
    }

}

void soal4()
{
    
}