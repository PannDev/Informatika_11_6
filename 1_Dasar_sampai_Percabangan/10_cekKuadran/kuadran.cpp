#include<iostream>
using namespace std;

//! main
int main () { 

    int x, y;
    cout << "masukan nilai x : "; cin >> x;
    cout << "masukan nilai y : "; cin >> y;

    if (x > 0 && y > 0) { //* x,y > 0 
        cout << "kuadran 1" << endl;
    } else if (x < 0 && y > 0) { //* x < 0   y > 0
        cout << "kuadran 2" << endl;
    } else if (x < 0 && y < 0) { //* x dan y < 0
        cout << "kuadran 3" << endl;
    } else if (x > 0 && y < 0) { //* x > 0 dan y < 0
        cout << "kuadran 4" << endl;
    } else if (x == 0 && y == 0) { //* x == 0 dan y == 0
        cout << "titik pusat" << endl;
    } else if (x == 0) {
        cout << "titik berada di garis Y" << endl;
    } else if (y == 0) {
        cout << "titik berada di garis X" << endl;
    }

    return 0;
}
