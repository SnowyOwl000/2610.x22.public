#include <iostream>

using namespace std;

#define NUM_COLORS (sizeof(colors)/sizeof(colors[0]))

int main() {
  string
    colors[] = {"red","orange","yellow","green","blue","violet"};
  int
    wavelengths[] = {700,600,575,530,490,400};
//const int NUM_COLORS=(sizeof(colors)/sizeof(colors[0]));

  string
    tmp;
  int
    tmpW;
    
  for (int i=1;i<NUM_COLORS;i++) {
    tmp = colors[i];
    tmpW = wavelengths[i];
    int j;
    
    for (j=i-1;j>=0&&colors[j]>tmp;j--) {
      colors[j+1] = colors[j];
      wavelengths[j+1] = wavelengths[j];
    }
    colors[j+1] = tmp;
    wavelengths[j+1] = tmpW;
  }
    
  for (int i=0;i<NUM_COLORS;i++)
    cout << "Color: " << colors[i] << "   wavelength: " << wavelengths[i] << "nm" << endl;
    
  return 0;
}

