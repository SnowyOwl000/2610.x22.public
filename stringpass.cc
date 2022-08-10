#include <iostream>

using namespace std;

void fn(string s) {

  s[0] = 'x';
}

int main() {
  string
    str = "foo";
    
  cout << str << endl;
  
  fn(str);
  
  cout << str << endl;
  
  return 0;
}

