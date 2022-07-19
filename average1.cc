// this doesn't work, the steps are out of sequence

#include <iostream>

using namespace std;

int main() {
  int32_t
    total = 0,
    count = 0,
    score,
    average;
    
  while (score != -1) {
    cout << "Enter score (-1 to quit): ";
    cin >> score;
    
    total = total + score;	// total += score also works
    
    count++;
  }
  
  average = total / count;
  
  cout << "Average: " << average << endl;
  
  return 0;
}

