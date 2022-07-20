#include <iostream>

using namespace std;

int main() {
    int64_t
        num,        // number to test
        factor;     // potential factor of num
    bool
        isPrime = true;

    // get a number
    cout << "Enter an integer: ";
    cin >> num;

    // if number is < 2, not prime
    if (num < 2)
        isPrime = false;

    // 2 is prime
    else if (num == 2)
        isPrime = true;

    // even numbers > 2 are not prime
    else if (num % 2 == 0)
        isPrime = false;

    // otherwise, check all factors <= sqrt(num)
    else
        for (factor=3;factor * factor <= num;factor += 2)
            if (num % factor == 0)
                isPrime = false;

    if (isPrime)
        cout << num << " is prime" << endl;
    else
        cout << num << " is not prime" << endl;

    return 0;
}
