#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

string decrypt(const string message) {
    srand(time(0));
    static int secret = rand() % 320000;
    string output;
    int a = 0, b = 1, c = 0;

    for (int i = 0; i < message.size(); ++i) {
        output += ((int)message[i]) + (secret + c);
        c = a + b;
        a = b;
        b = c;
    }
    return output;
}

string encrypt(const string message) {
    srand(time(0));
    static int secret = rand() % 32000;
    string output;

    int a = 0, b = 1, c = 0;

    for (int i = 0; i < message.size(); ++i) {
        output += ((int)message[i]) - (secret + c);

        c = a + b;
        a = b;
        b = c;
    }
    return output;
}


int main () {
    string message, output, result;
    cout << "Masukan Pesan yang di Enkripsi: ";
    getline(cin, message);

    output = encrypt(message);
    result = decrypt(message);

    cout << "Pesan : " << message << endl << endl;
    cout << "Hasil Enkripsi : " << output << endl << endl;
    cout << "Hasil Deskripsi : " << result << endl << endl;

    return 0;
}