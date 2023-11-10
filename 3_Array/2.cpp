#include<iostream>
using namespace std;

//! main
int main () { 

    int number[4] = {4, -3, 7, 1};

    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        if (number[j+1] < number[j]) {
            int temp = number[j];
            number[j] = number[j+1];
            number[j+1] = temp;
        }
    }
    }

    for (int i = 0; i < 4; i++) {
        cout << number[i] << " ";
    } cout << endl;

    return 0;
}
