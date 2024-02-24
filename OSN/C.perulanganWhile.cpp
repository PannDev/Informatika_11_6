#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

//! main
int main () { 

// versi simple : https://ideone.com/JfYVZe
    /*int n; cin >> n;

    for (int i = 1; i <= n; i++)
        {
            for (int j = n; j > i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        */

    // int t; cout << "t : "; cin >> t;
    // while (t--) {
        
        // int count = 0, bil = 2;
        // int n; cin >> n;

        // bool prime = true;
        // while (count <= n) {
        //     if (bil % 2 == 0) {
        //         prime = false;
        //         bil++;
        //     } else {
        //         prime = true;
        //         // bil++;
        //     }
        //     count++;
        //     if (prime) cout << bil << endl;
        // }

        int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        if (i % 10 == 0) {
            continue;
        } if (i == 42 == 0) {
            cout << "ERROR" << endl;
            break;
        }
        cout << i << endl;
    }

        

    
    
    // }

    return 0;
}
