#include <iostream>

using namespace std;

int findMax(int data[],int nItems) {
  int
    guess = 0;
    
  for (int i=1;i<nItems;i++)
    if (data[i] > data[guess])
      guess = i;
      
  return guess;
}

int findMin(int data[],int nItems) {
  int
    guess = 0;
    
  for (int i=1;i<nItems;i++)
    if (data[i] < data[guess])
      guess = i;
      
  return guess;
}

