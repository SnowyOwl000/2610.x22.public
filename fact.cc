#include <iostream>

using namespace std;

int main() {
  int
    f=1;
    
  for (int i=1;i<=40;i++) {
    f = f * i;
    
    cout << i << '\t' << f << endl;
  }
  
  return 0;
}

