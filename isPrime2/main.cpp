#include <iostream>

using namespace std;

bool isPrime(uint64_t num) {

    // if number is < 2, not prime
    if (num < 2)
        return false;

    // 2 is prime
    if (num == 2)
        return true;

    // even numbers > 2 are not prime
    if (num % 2 == 0)
        return false;

    // otherwise, check all factors <= sqrt(num)
    for (uint64_t factor = 3; factor * factor <= num; factor += 2)
        if (num % factor == 0)
            return false;

    return true;
}

int main() {
    int64_t
        num;

    // get a number
    cout << "Enter an integer: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is prime" << endl;
    else
        cout << num << " is not prime" << endl;

    return 0;
}
