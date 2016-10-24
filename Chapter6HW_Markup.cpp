/******************************************************
* Kevin Parnell										                    *
* 10/24/2016										                      *
* Markup											                        *
*													                            *
* Programming to show markup and retail prices	      *
******************************************************/

// This program will show markup and retail prices
#include <iostream>
using namespace std;

void calculateRetail(double, double);

int main()
{
	// Variables they will be inputting
	double wholesale;
	double markup;

	// Asking the item wholesale cost
	cout << "What is the item's wholesale cost? \n";
	cin >> wholesale;

	if (wholesale >= 0)
	{
		// Asking the item markup percentage
		cout << "What is the markup percentage? \n";
		cin >> markup;
		if (markup >= 0)
		{
			// Calls the function and gives it arguments
			calculateRetail(wholesale, markup);
		}
		else
		{
			cout << "The value you input is invalid, please restart the program. \n";
		}
	}
	else
	{
		cout << "The value you input is invalid, please restart the program. \n";
	}
}

// This will calculate retail for the user.
void calculateRetail(double whole, double mark)
{
	// Variables
	double markAdd;
	double total;

	// Math
	markAdd = whole * (mark/100);
	total = whole + markAdd;

	// Tells user the total
	cout << "Your total is " << total << ".\n";
}
