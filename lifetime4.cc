#include <iostream>

using namespace std;

void foo() {
  static int
    val=-999;
    
  cout << "Location of val is " << &val << endl;
  cout << "Before assignment, val is " << val << endl;
  
  val = 5;
  
  cout << "After assignment, val is " << val << endl;
}

int main() {

  cout << "Calling foo twice" << endl;
  
  foo();
  cout << "In between calls" << endl;
  foo();
  
  cout << "Done" << endl;
  
  return 0;
}

