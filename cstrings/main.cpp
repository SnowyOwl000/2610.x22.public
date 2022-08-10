#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char
        str1[80],
        str2[80];

    cout << "Enter a string: ";
    cin >> str1;

    cout << "You entered [" << str1 << ']' << endl;
    cout << "Length: " << strlen(str1) << endl;

    // not legal, although we do want to assign strings
    //str2 = str1;

    strcpy(str2,str1);  // how to say "str2 = str1"

    cout << "second string: [" << str2 << ']' << endl;

    cout << "Enter a second string: ";
    cin >> str2;

    // these are comparing locations of the strings,
    // NOT the contents!
    /*
    if (str1 == str2)
        cout << "Strings are equal" << endl;

    if (str1 < str2)
        cout << "str1 comes first" << endl;

    if (str1 > str2)
        cout << "str1 comes second" << endl;

    cout << "Location of str1: " << (void *)str1 << endl;
    cout << "Location of str2: " << (void *)str2 << endl;
    */

    // using strcmp():
    // want             say
    // str1 == str2     strcmp(str1,str2) == 0
    // str1 != str2     strcmp(str1,str2) != 0
    // str1 < str2      strcmp(str1,str2) < 0
    // str1 > str2      strcmp(str1,str2) > 0
    // str1 <= str2     strcmp(str1,str2) <= 0
    // str1 >= str2     strcmp(str1,str2) >= 0

    if (strcmp(str1,str2) == 0)
        cout << "Strings are equal" << endl;
    if (strcmp(str1,str2) < 0)
        cout << "str1 comes first" << endl;
    if (strcmp(str1,str2) > 0)
        cout << "str2 comes first" << endl;

    if (strcasecmp(str1,str2) == 0)
        cout << "case insensitive says equal" << endl;

    return 0;
}
