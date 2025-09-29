#include <iostream>
using namespace std;

int main() {
    int i, j;
    // HURUF F
    for (i = 0; i < 5; i++) {
        if (i == 0 || i == 2) {
            for (j = 0; j < 5; j++) {
                cout << "F";
            }
        } else {
            cout << "F";
        }
        cout << endl;
    }

    cout << endl;

    //huruf A
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j > 0 && j < 4) ||
                (i == 2 && j > 0 && j < 4) ||
                (j == 0 && i > 0) ||
                (j == 4 && i > 0))
                cout << "A";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    //huruf R
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 0 ||
               (i == 0) ||
               (i == 2 && j < 3) ||
               (j == 4 && (i == 1)) ||
               (j == 4 && i > 2))
                cout << "R";
            else
                cout << " ";
        }
        cout <<  endl;
    }

    cout << endl;

    //huruf I
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i==0 || i==4 || j==2)
            cout << "I";
            else
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    //huruf D
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 0 ||
               (i == 0 && j < 4) ||
               (i == 4 && j < 4) ||
               (j == 4 && i > 0 && i < 4))
               cout << "D";
            else
               cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}