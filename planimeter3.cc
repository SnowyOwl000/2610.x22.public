#include <iostream>

using namespace std;

struct Point {
  int32_t
    x,y;
    
  bool operator==(const Point &p) { return x == p.x && y == p.y; }
  bool operator!=(const Point &p) { return x != p.x || y != p.y; }
};

int main() {
  double
    area;		// area of polygon
  int32_t
    total=0;		// total value (twice area)
  Point
    first,		// first point of polygon
    cur,		// current point of polygon
    prev;		// previous point of polygon
    
  cout << "Enter first point (x y): ";
  cin >> first.x >> first.y;
  
  // copy first point into current
  cur = first;
  
  do {
    // copy current point into previous point
    prev = cur;
    
    // get next point
    cout << "Enter next point (x y): ";
    cin >> cur.x >> cur.y;
    
    // process next segment
    total = total + (prev.x * cur.y - cur.x * prev.y);
  
  } while (cur != first); // go until cur point == first point
  
  // divide by 2 to get area
  area = total / 2.0;
  
  cout << "Area = " << area << endl;

  return 0;
}

