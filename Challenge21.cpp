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
  int people;
  int pizzas;

  // Asks the person the diameter pizza size they want
  cout << "How many people will be at the party? ";
  cin >> people;
  cout << "What is the diameter of the pizzas being ordered? ";
  cin >> diameter;

  // To get the radius
  radius = diameter / 2;

  // To get the pi equation
  area = pi * pow(radius, 2);

  // To get the amount of slices
  slices = area / sliceArea;

  // To do the pizza for people
  pizzas = ceil (people * 4 / slices);

  // Tell the person how many slices they have
  cout << "The amount of pizzas needed to be ordered is ";
  cout << pizzas;
  cout << ".";
  return 0;
}
