#include <iostream>

using namespace std;

#define FOO_SIZE (sizeof(foo)/sizeof(foo[0]))

int main() {
  int
    foo[] = {4,0,2,6,8,1,3,5,7},
    foo2[9];
    
  cout << "array: " << foo << endl;
  cout << "items: ";
  for (int i=0;i<FOO_SIZE;i++)
    cout << ' ' << foo[i];
  cout << endl;
  
  //cin >> foo;	// can't input into an array (as one entity)
  
  foo2 = foo;
  
  return 0;
}

