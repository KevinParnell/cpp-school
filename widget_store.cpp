// This program tracks the inventory of three widget stores
// that opened at the same time. Each store started with the
// same number of widgets in inventory. By subtracting the
// number of widgets each store has sold from its inventory,
// the current inventory can be calculated.
#include <iostream>
using namespace std;

int main()
{
  int begInv, // Beginning inventory for all stores
  sold, // Number of widgets sold
  store1, // Store one's inventory
  store2, // Store two's inventory
  store3; // Store three's inventory

  // Get the beginning inventory for all the stores.
  cout << "One week ago, 3 new widget stores opened\n";
  cout << "at the same time with the same beginning\n";
  cout << "inventory. What was the beginning inventory? ";
  cin >> begInv;

  // Set each store's inventory.
  store1 = store2 = store3 = begInv;

  // Get the number of widgets sold at store one.
  cout << "How many widgets has store one sold? ";
  cin >> sold;
  store1 -= sold; // Adjust store one's inventory.

  // Get the number of widgets sold at store two.
  cout << "How many widgets has store two sold? ";
  cin >> sold;
  store2 -= sold; // Adjust store two's inventory.

  // Get the number of widgets sold at store three.
  cout << "How mandy widgets has store three sold? ";
  cin >> sold;
  store3 -= sold; // Adjust store three's inventory.

  // Display each store's current inventory.
  cout << "\nThe current inventory of each store:\n";
  cout << "Store one: " << store1 << endl;
  cout << "Store two: " << store2 << endl;
  cout << "Store three: " << store3 << endl;
  return 0;
}
