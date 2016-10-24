/******************************************************
* Kevin Parnell										                    *
* 10/24/2016										                      *
* Functions Part 1									                  *
*													                            *
* Programming a function that accepts an argument     *
******************************************************/

// This program will multiply the number the user
// puts in by 10. So if they put in 10, it will make
// it 100.
#include <iostream>
using namespace std;

void timesTen(int);

int main()
{
	// The value the user will end up putting in
	int value;

	// Asks for a value
	cout << "Enter a value.\n";
	cin >> value;

	timesTen(value);
}

// The timesTen function will display the product of its
// argument multiplied by 10.
void timesTen(int num)
{
	int value;

	// Math
	value = num * 10;

	// Displays the message to the user
	cout << "Your value is now " << value << ".\n";
}
