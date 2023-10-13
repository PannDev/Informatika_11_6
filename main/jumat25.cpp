#include <iostream>
using namespace std;

int main () {

    string member, pembayaran;
    float harga, totalBelanja;

    cout << "punya member tidak? [ya/tidak] "; cin >> member;
    cout << "berapa total belanja? "; cin >> harga;
    cout << "Pembayaran dengan cash/kartu/tf/qris ? "; cin >> pembayaran;

    // (member == "ya") ? totalBelanja = harga - 0.1 * harga : totalBelanja = harga; 

    if (member == "ya") {
        totalBelanja = harga - 0.1 * harga;
    } else {
        totalBelanja = harga;
    }

    if (pembayaran == "cash") {
        totalBelanja -= 0.04 * totalBelanja;
    } else if (pembayaran == "kartu") {
        totalBelanja += 0.05 * totalBelanja;
    }

    cout << "total belanja anda : " << totalBelanja << endl;
    return 0;
}