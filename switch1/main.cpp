#include <iostream>

using namespace std;

int main() {
    char
        ch;

    cout << "Enter a digit: ";
    cin >> ch;

    if (ch < '0' || ch > '9') {
        cout << "Error: Enter a digit." << endl;
        return 1;
    }

    switch (ch) {
        case '0':
            cout << '-' << endl;
        case '1':
            cout << 'I' << endl;
        case '2':
            cout << "II" << endl;
        case '3':
            cout << "III" << endl;
        case '4':
            cout << "IV" << endl;
        case '5':
            cout << 'V' << endl;
        case '6':
            cout << "VI" << endl;
        case '7':
            cout << "VII" << endl;
        case '8':
            cout << "VIII" << endl;
        case '9':
            cout << "IX" << endl;
    }

    return 0;
}
