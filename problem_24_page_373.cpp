/******************************************************
* Kevin Parnell										                    *
* 10/24/2016										                      *
* Rock Paper Scissors									                *
*													                            *
* Programming a Rock Paper Scissors game              *
******************************************************/
#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
using namespace std;

int main()
{
  int choice;
  int i;
  int comp;
  char res;

  unsigned seed;

  cout << "This is the simple game Rock Paper Scissors. \nRock beats Scissors \nPaper beats Rock \nand Scissors beats Paper.\n\n";
  // The choices the player can make
  cout << "****************\n";
  cout << "* Turn Choices *\n";
  cout << "* 1. Rock      *\n";
  cout << "* 2. Paper     *\n";
  cout << "* 3. Scissors  *\n";
  cout << "****************\n";
  cout << "Please enter your choice: ";
  cin >> choice;

  // This is the statement that will do your choice stuff
  if (choice == 1) // Rock
  {
    cout << "You picked Rock.\n";
    cout << "Now here was my choice.\n";
  }
  else if (choice == 2) // Paper
  {
    cout << "You picked Paper.\n";
    cout << "Now here was my choice.\n";
  }
  else if (choice == 3) // Scissors
  {
    cout << "You picked Scissors.\n";
    cout << "Now here was my choice.\n";
  }

  seed = time(0);
  srand(seed); // This is for the random number generator

  comp = rand() % 3 + 1; // This is what the computer will pick

  if (comp==1) // Computer Rock
  {
    res = 1;
    cout << "Rock!\n";
  }
  else if (comp==2) // Computer Paper
  {
    res = 2;
    cout << "Paper!\n";
  }
  else if (comp==3) // Computer Scissors
  {
    res = 3;
    cout << "Scissors!\n";
  }

  switch (res)
  {
    case '1': cout << "test";
    case '2': cout << "tests";
    case '3': cout << "test";
  }

  // Scans for all winning combinations
  if ((choice == 1 && comp == 3) || (choice == 2 && comp == 1) || (choice == 3 && comp == 2))
  {
    cout << "You win!";
  }
  else if ((choice == 3 && comp == 1) || (choice == 1 && comp == 2) || (choice == 2 && comp == 3))
  {
    cout << "You lose!";
  }
  else if ((choice == 1 && comp == 1) || (choice == 2 && comp == 2) || (choice == 3 && comp == 3))
  {
    cout << "It's a tie!";
  }
  return 0;
}
