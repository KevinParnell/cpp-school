// This is a pizza program
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  double diameter; // Pizza diameter

  double sliceArea = 14.125; // Area of pizza slice
  double pi = 3.14159; // Pi
  double radius;
  double slices;
  double area;

  // Asks the person the diameter pizza size they want
  cout << "What would you like the diameter of your pizza to be in inches? ";
  cin >> diameter;

  // To get the radius
  radius = diameter / 2;

  // To get the pi equation
  area = pi * pow(radius, 2);

  // To get the amount of slices
  slices = area / sliceArea;

  // Tell the person how many slices they have
  cout << "You will have ";
  cout << setprecision(1) << fixed;
  cout << slices << ".";
  return 0;
}
