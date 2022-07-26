#include <iostream>

using namespace std;

int main() {
  int
    row,col;
    
  for (row=1;row<=3;row++)
    for (col=1;col<=3;col++)
      cout << row << '\t' << col << '\t' << (row * col) << endl;
      
  return 0;
}

