// This is for the checkpoint in the book lmao
#include <iostream>
using namespace std;

int main()
{
  double pounds, kilograms;

  cout << "How much do you weigh (in pounds): " << endl;
  // This lets the user input their weight (in pounds)
  cin >> pounds;

  // The following line does the conversion
  kilograms = pounds/2.2;
﻿﻿  // This will display your weight in kilograms
  cout << "This is your weight in kilograms " << kilograms << "." << endl;
  return 0;
}
