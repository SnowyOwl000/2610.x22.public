#include <iostream>

using namespace std;

int main() {
    string
        str1,
        str2;

    cout << "Enter a string: ";
    cin >> str1;

    cout << "You entered [" << str1 << ']' << endl;
//    cout << "Length: " << strlen(str1) << endl;
    cout << "Length: " << str1.length() << endl;

    str2 = str1;

    //strcpy(str2,str1);  // how to say "str2 = str1"

    cout << "second string: [" << str2 << ']' << endl;

    cout << "Enter a second string: ";
    cin >> str2;

    if (str1 == str2)
        cout << "Strings are equal" << endl;

    if (str1 < str2)
        cout << "str1 comes first" << endl;

    if (str1 > str2)
        cout << "str1 comes second" << endl;

    return 0;
}
