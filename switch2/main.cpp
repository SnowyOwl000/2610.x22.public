#include <iostream>

using namespace std;

int main() {
    char
        ch;

    cout << "Enter a letter: ";
    cin >> ch;

    if (!isalpha(ch)) {
        cout << "Did I not say to enter a letter?" << endl;
        return 1;
    }

    switch (ch) {
        case 'a':
        case 'A':
            cout << "A is a vowel" << endl;
            break;
        case 'e':
        case 'E':
            cout << "E is a vowel" << endl;
            break;
        case 'i':
        case 'I':
            cout << "I is a vowel" << endl;
            break;
        case 'o':
        case 'O':
            cout << "O is a vowel" << endl;
            break;
        case 'u':
        case 'U':
            cout << "U is a vowel" << endl;
            break;
        case 'y':
        case 'Y':
            cout << "Y is sometimes a vowel" << endl;
            break;
        default:
            cout << "That is not a vowel" << endl;
    }
    return 0;
}
