#include <iostream>

using namespace std;

int main() {
    double
        score;

    cout << "Enter score: ";
    cin >> score;

    cout << "Scoring method 1" << endl;
    if (score >= 90)
        cout << 'A' << endl;
    if (score >= 80)
        cout << 'B' << endl;
    if (score >= 70)
        cout << 'C' << endl;
    if (score >= 60)
        cout << 'D' << endl;
    else
        cout << 'F' << endl;

    cout << "Scoring method 2" << endl;
    if (score >= 90)
        cout << 'A' << endl;
    else if (score >= 80)
        cout << 'B' << endl;
    else if (score >= 70)
        cout << 'C' << endl;
    else if (score >= 60)
        cout << 'D' << endl;
    else
        cout << 'F' << endl;

    return 0;
}
