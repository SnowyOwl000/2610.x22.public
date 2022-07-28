#include <iostream>
#include <iomanip>

using namespace std;

const double
    TOL = 1e-16;

int main(int argc,char *argv[]) {
    double
        x;
    uint64_t
        nLow=0,dLow=1,      // low watermark
        nHigh=1,dHigh=0,    // high watermark
        nMed,dMed;          // mediant

    // make sure there is a value to convert
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }

    // convert from text to numeric form
    x = strtod(argv[1], nullptr);

    // loop...
    do {
        // calculate mediant
        nMed = nLow + nHigh;
        dMed = dLow + dHigh;

        // determine which side holds x, move endpoint
        if (dMed * x < nMed) {
            // x is on low side, move high watermark
            nHigh = nMed;
            dHigh = dMed;
        } else {
            // x is on high side, move low watermark
            nLow = nMed;
            dLow = dMed;
        }
        //cout << nMed << " / " << dMed << endl;
    } while (abs(dMed * x - nMed) >= dMed * TOL);

    cout << setprecision(16);
    cout << "x = " << x << " = " << nMed << " / " << dMed << endl;
    cout << "Approximately " << (nMed / (double)dMed) << endl;
    cout << "Error: " << abs(x - nMed / (double)dMed) << endl;
    return 0;
}
