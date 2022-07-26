#include <iostream>
#include <iomanip>

using namespace std;

double bsqrt(double x) {
    double
        yOld,yNew;

    yNew = x / 2;

    // Babylonian square root
    do {
        yOld = yNew;

        yNew = (yNew + x / yNew) / 2;
    } while (yOld != yNew);

    return yNew;
}

int main() {
    double
        x,
        y;

    cout << "Enter nonnegative value: ";
    cin >> x;

    if (x < 0) {
        cout << "No negative numbers." << endl;
        return 1;
    }

    // call square root function here
    y = bsqrt(x);

    cout << setprecision(12) << "y = " << y << endl;

    cout << (y * y) << endl;

    return 0;
}
