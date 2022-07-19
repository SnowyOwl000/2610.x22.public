#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double
    x,
    yOld,yNew,
    term;
  int
    n = 1,
    sign = 1;
    
  cout << "Enter value: ";
  cin >> x;
  
  yNew = 0;
  
  term = x;
  
  cout << setprecision(12);
  
  // 
  do {
    yOld = yNew;
  
    yNew = yNew + sign * term;
    
    term = term * x * x / ((n + 2) * (n + 1));
    sign = -sign;
    
    n += 2;
    
    cout << "yNew = " << yNew << endl;
  } while (yOld != yNew);
  
  cout << setprecision(12) << "y = " << yNew << endl;
  
  cout << sin(x) << endl;

  return 0;
}

