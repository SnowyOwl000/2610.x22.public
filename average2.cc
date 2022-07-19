// this works

#include <iostream>

using namespace std;

int main() {
  int32_t
    total = 0,
    count = 0,
    score;
  double
    average;

  // loop priming    
  cout << "Enter score (-1 to quit): ";
  cin >> score;
    
  while (score != -1) {
    total = total + score;	// total += score also works
    
    count++;

    cout << "Enter score (-1 to quit): ";
    cin >> score;
  }
  
  if (count == 0)
    cout << "No scores to average." << endl;
  else {
    average = total / (double)count;
  
    cout << "Average: " << average << endl;
  }
  
  return 0;
}

