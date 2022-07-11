#include <iostream>

using namespace std;

int main() {
  int
    num = 2147483647;

  cout << "num is " << num << endl;

  num = num + 1;
  // num += 1
  // num++

  cout << "num is now " << num << endl;

  num = -1;

  cout << "changing num to " << num << endl;

  num++;	// add 1

  cout << "after ++, num is " << num << endl;

  return 0;
}
