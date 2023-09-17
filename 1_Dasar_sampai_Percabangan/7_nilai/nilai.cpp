#include<iostream>
using namespace std;

//! main
int main () { 

    int pratikum, uts, uas;
    float nilaiAkhir;
    string grade;

    cout << "masukan nilai pratikum : "; cin >> pratikum;
    cout << "masukan nilai uts : "; cin >> uts;
    cout << "masukan nilai uas : "; cin >> uas;

    nilaiAkhir = (0.5*pratikum) + (0.2*uts) + (0.3*uas);

    if (nilaiAkhir >= 90) {
        grade = "A";
    } else if (nilaiAkhir < 90 && nilaiAkhir >= 80) {
        grade = "B";
    } else if (nilaiAkhir < 80 && nilaiAkhir >= 70) {
        grade = "C";
    } else if (nilaiAkhir < 70 && nilaiAkhir >= 60) {
        grade = "D";
    } else {
        grade = "E";
    }

    cout << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Grade Nilai : " << grade << endl;

    return 0;
}
