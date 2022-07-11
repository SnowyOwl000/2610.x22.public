#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float
    num = 16777216;

  cout << setprecision(10);

  cout << "num is " << num << endl;

  num = num + 7;

  cout << "num is now " << num << endl;

  return 0;
}
