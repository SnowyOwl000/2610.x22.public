#include <iostream>
#include <iomanip>

using namespace std;

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
  
  yNew = x / 2;
  
  cout << setprecision(12);
  
  // Babylonian square root
  do {
    yOld = yNew;
  
    yNew = (yNew + x / yNew) / 2;
    
    cout << "yNew = " << yNew << endl;
  } while (yOld != yNew);
  
  cout << setprecision(12) << "y = " << yNew << endl;
  
  cout << (yNew * yNew) << endl;

  return 0;
}

