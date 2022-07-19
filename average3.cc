// this also works, no loop priming necessary

#include <iostream>

using namespace std;

int main() {
  int32_t
    total = 0,
    count = 0,
    score;
  double
    average;

  while (true) {	// this looks like an infinite loop
    cout << "Enter score (-1 to quit): ";
    cin >> score;

    if (score == -1)	// check in the middle
      break;
        
    total = total + score;	// total += score also works
    
    count++;
  }
  
  if (count == 0)
    cout << "No scores to average." << endl;
  else {
    average = total / (double)count;
  
    cout << "Average: " << average << endl;
  }
  
  return 0;
}

