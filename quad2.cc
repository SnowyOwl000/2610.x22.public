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

  // step 2: calculate discriminant d = b^2 - 4ac
  d = b * b - 4 * a * c;

  // step 3: calculations, by case
  
  if (a == 0 && b == 0) {  		// step 3.1: a = b = 0, error
  
    cout << "Error: a and b cannot both be zero" << endl;
  
  } else if (a == 0 && b != 0) {	// step 3.2: a = 0, b !=0, linear
  
    x1 = -c / b;
    cout << "Linear equation, solution is x = " << x1 << endl;
  
  } else if (d < 0) {			// step 3.3: complex
  
    double
      re,im;
      
    re = -b / (2 * a);
    im = sqrt(-d) / (2 * a);
    
    cout << "Complex roots: x1 = " << re << " + " << im << 'i' << endl;
    cout << "x2 = " << re << " - " << im << 'i' << endl;
  
  } else if (d == 0) {			// step 3.4: repeated root

    x1 = -b / (2 * a);
    cout << "Root of multiplicity 2... x = " << x1 << endl;

  } else {				// step 3.5: two distinct real roots

    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

  }

  // step 4: all done!
  return 0;
}

