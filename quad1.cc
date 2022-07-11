#include <iostream>
#include <cmath>

using namespace std;

int main() {

  // step 0: variables
  double
    a,b,c,	// coefficients
    d,		// discriminant
    x1,x2;	// roots

  // step 1: input a, b and c
  cout << "Enter a: ";
  cin >> a;

  cout << "Enter b: ";
  cin >> b;

  cout << "Enter c: ";
  cin >> c;

  // step 2: calculations

  // step 2.1: calculate discriminant d = b^2 - 4ac
  d = b * b - 4 * a * c;

  // step 2.2: calculate x1 = (-b + sqrt(d) ) / 2a
  x1 = (-b + sqrt(d)) / (2 * a);

  // step 2.3: calculate x2 = (-b - sqrt(d) ) / 2a
  x2 = (-b - sqrt(d)) / (2 * a);

  // step 3: output x1 and x2
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;

  return 0;
}

