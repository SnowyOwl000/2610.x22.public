#include <iostream>

using namespace std;

int main() {
  double
    compass,	// compass heading 0 <= x < 360
    bearing;	// bearing 0 <= b <= 90
    
  // step 0: get compass heading
  cout << "Enter compass heading 0 <= c < 360: ";
  cin >> compass;
  
  // step 1: check range
  if (compass < 0 || compass >= 360) {
    cout << "Error: compass heading must be in the range 0 <= c < 360" << endl;
    return 1;
  }
  
  // step 2: determine quadrant and display bearing
  
  if (compass <= 90) {		  // 0 <= c <= 90 ... N # E
  
    bearing = compass;
    cout << "N " << bearing << " E" << endl;
  
  } else if (compass <= 180) {   // 90 < c <= 180 ... S # E
  
    bearing = 180 - compass;
    cout << "S " << bearing << " E" << endl;
  
  } else if (compass < 270) {	  // 180 < c < 270 ... S # W
  
    bearing = compass - 180;
    cout << "S " << bearing << " W" << endl;
  
  } else {			  // 270 <= c < 360 ... N # W
  
    bearing = 360 - compass;
    cout << "N " << bearing << " W" << endl;
  
  }
  
  // step 3: all done!
  return 0;
}

