#include <iostream>

using namespace std;

void foo() {
  int
    val;
    
  cout << "Location of val is " << &val << endl;
  cout << "Before assignment, val is " << val << endl;
  
  val = 5;
  
  cout << "After assignment, val is " << val << endl;
}

int main() {

  cout << "Calling foo twice" << endl;
  
  foo();
  foo();
  
  cout << "Done" << endl;
  
  return 0;
}

