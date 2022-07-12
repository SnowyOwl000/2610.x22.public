#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double
    val = 0.875,
    val2;
    
  cout << val << endl;
  
  cout << setprecision(2) << fixed;
  
  cout << val << endl;
  
  val2 = 2 * val;
  
  cout << val2 << endl;
  
  return 0;
}

