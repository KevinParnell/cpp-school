// This is pi stuff
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // declare variables
  const double PI = 3.14159;
  double volume,radius, height;

  // Prompt for data
  cout << "This program will tell you the volume of\n";
  cout << "a cylinder-shaped fuel tank.\n";
  cout << "How tall is the tank? ";
  cin >> height;
  cout << "What is the radius of the tank? ";
  cin >> radius;

  // Calculate volume v=PIrrh
  volume = PI * pow(radius, 2) * height;

  cout << " The volume is: " << volume << endl;
  return 0;
}
