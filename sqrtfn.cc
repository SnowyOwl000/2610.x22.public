#include <iostream>
#include <iomanip>

using namespace std;

double bsqrt() {
  double
    x,
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
    yOld,yNew;
    
  cout << "Enter nonnegative value: ";
  cin >> x;
  
  if (x < 0) {
    cout << "No negative numbers." << endl;
    return 1;
  }
  
  // call square root function here
  bsqrt();
  
  cout << setprecision(12) << "y = " << yNew << endl;
  
  cout << (yNew * yNew) << endl;

  return 0;
}

