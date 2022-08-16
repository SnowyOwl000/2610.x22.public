#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    int32_t
        n,
        d;
    Stack
        s;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        d = n % 10;
        n /= 10;

        s.push(d);
    }

    while (!s.isEmpty()) {
        d = s.pop();

        cout << d << endl;
    }

    return 0;
}
