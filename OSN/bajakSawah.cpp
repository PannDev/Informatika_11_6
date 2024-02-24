#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

//! main
int main () { 

    int arr[100];

    int i = 0;
    while (cin >> arr[i]) {
        i++;
    }

    for (int j = i -1; j >= 0; j--) {
        cout << arr[j] << endl;
    }
    /*
    int angka, n = 0;
    while (cin >> angka) {
        n++;
        arr[n] = angka;
    }
    for (int i = n; i >= 1; i--) {
        cout << arr[i] << endl;
    }
    */
    
    return 0;
}
