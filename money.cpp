// This program will act like a cash register
#include <iostream>
using namespace std;

int main()
{
  double priceone;
  double pricetwo;
  double pricethree;
  double pricefour;
  double pricefive;
  double salestax;
  double subtotal;
  double total;
  double tax;

  priceone = 15.95; // These prices are the ones given
  pricetwo = 24.95;
  pricethree = 6.95;
  pricefour = 12.95;
  pricefive = 3.95;
  salestax = 0.07; // The sales tax here is 7%

  cout << "Item one is " << priceone << endl;
  cout << "Item two is " << pricetwo << endl;
  cout << "Item three is " << pricethree << endl;
  cout << "Item four is " << pricefour << endl;
  cout << "Item five is " << pricefive << endl;

  // Calculate sub total
  subtotal = priceone + pricetwo + pricethree + pricefour + pricefive;

  // Calculate total
  total = subtotal * salestax + subtotal;

  // Calculate tax
  tax = salestax * subtotal;

  cout << "The subtotal is " << subtotal << endl;
  cout << "The tax is " << tax << endl;
  cout << "The total is " << total << endl;
  return 0;
}
