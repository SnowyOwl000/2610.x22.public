#include <iostream>
#include "die.h"

using namespace std;

int main() {
    Die
        d1,d2,
        d20(20),
        coin(2);

    for (int i=0;i<10;i++) {
        d1.roll();
        d2.roll();

        cout << "Dice are " << d1.look() << " and " << d2.look()
            << "  sum is " << d1.look() + d2.look() << endl;
    }

    for (int i=0;i<10;i++)
        cout << "20-sided die: " << d20.roll() << endl;

    for (int i=0;i<10;i++)
        cout << "Coin flip: " << coin.roll() << endl;

    return 0;
}
