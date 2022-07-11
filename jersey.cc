#include <iostream>

using namespace std;

int main() {
  int
    jerseyNum;
  string
    name;

  cout << "Enter jersey number: ";
  cin >> jerseyNum;

  // must do this when switching from >> to getline
  // tosses any enter sitting in the input
  // (try commenting this next line and see what happens)
  cin.ignore();

  cout << "Enter player name: ";
  getline(cin,name);

  cout << "Player " << name << " has jersey number " << jerseyNum << endl;

  return 0;
}

