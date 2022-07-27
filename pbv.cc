#include <iostream>

using namespace std;

void fn(int num) {

  cout << "Val is " << num << endl;
  
  num = -3;
  
  cout << "Val is now " << num << endl;
  
  cout << "Val's location is " << &num << endl;
}

int main() {
  int
    num = 12;
    
  cout << "Num is " << num << " and lives at location " << &num << endl;
  
  fn(num);
  
  cout << "After fn(), num is " << num << endl;
  
  return 0;
}

