#include <iostream>
using namespace std;
#include <cmath>

// keliling jajar genjang function
float kJajarGenjang(float a, float b) {
    float keliling = 2 * (a + b);
    return keliling;
}

// luas jajar genjang function
float lJajarGenjang(float a, float t) {
    float luas = a * t;
    return luas;
}

// keliling dan luas segitiga function
void segitiga(float a, float b, float c) {
    float keliling = a + b + c;
    float s = keliling / 2;
    float luas = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;
}

// keliling dan luas trapesium function
void trapesium(float a, float b, float c, float d) {
    float keliling = a + b + c + d;
    float luas = 0.5 * (a + b) * c;
    cout << "Luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;
}

// main
int main () {
    cout << "1. Jajar Genjang" << endl;
}