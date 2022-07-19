#include <iostream>

using namespace std;

int main() {
  double
    area;		// area of polygon
  int32_t
    total,		// total value (twice area)
    xFirst,yFirst,	// first point of polygon
    xCur,yCur,		// current point of polygon
    xPrev,yPrev;	// previous point of polygon
    
  cout << "Enter first point (x y): ";
  cin >> xFirst >> yFirst;
  
  // copy first point into current
  xCur = xFirst;
  yCur = yFirst;
  
  do {
    // copy current point into previous point
    xPrev = xCur;
    yPrev = yCur;
    
    // get next point
    cout << "Enter next point (x y): ";
    cin >> xCur >> yCur;
    
    // process next segment
    total = total + (xPrev * yCur - xCur * yPrev);
  
  } while (xCur != xFirst || yCur != yFirst);	// go until cur point == first point
  
  // divide by 2 to get area
  area = total / 2.0;
  
  cout << "Area = " << area << endl;

  return 0;
}

