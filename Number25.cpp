// This program will calculate how much credit a customer has
#include <iostream>
using namespace std;

int main()
{
  int maxCredit, // Customers maximum credit
  usedCredit, // Customers used credit
  availCredit; // Customers available credit

  // Asks the max credit in the customers account
  cout << "How much credit is in your account? ";
  cin >> maxCredit;

  // Gets the customers spent credit
  cout << "How much credit have you used? ";
  cin >> usedCredit;

  // Calculates the customers available credit
  availCredit = maxCredit - usedCredit;

  // This tells the customer how much credit they have left in their account
  cout << "You currently have " << availCredit << " credit(s) left in your account." << endl;
  return 0;
}
