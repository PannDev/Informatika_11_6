#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

//! main
int main () { 

    int n, b, sum = 0;
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        sum += b;
    }

    cout << sum << endl;

    return 0;
}
