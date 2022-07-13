#include <iostream>

using namespace std;

int main() {
  double
    x,y;
    
  cout << "Enter non-zero x and y coordinates: ";
  cin >> x >> y;
  
  // data validation --- point not on axes
  if (x == 0 || y == 0) {
    cout << "Point is on an axis or the origin" << endl;
    return 1;
  }
  
  if (x > 0) {	// quadrants 1 or 4
  
    if (y > 0)
      cout << "Quadrant 1" << endl;
    else
      cout << "Quadrant 4" << endl;
      
  } else {	// quadrants 2 or 3
  
    if (y > 0)
      cout << "Quadrant 2" << endl;
    else
      cout << "Quadrant 3" << endl;
      
  }
  
  return 0;
}

