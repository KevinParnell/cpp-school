/******************************************************
* Kevin Parnell										                    *
* 11/25/2016										                      *
* COP2000 Final Project									              *
*													                            *
* Tic Tac Toe                                         *
******************************************************/
#include <iostream>

using namespace std;

// Initialize a 2d board (3,3) with asterisk
void drawBoard(char board[][3]);
char check_Winner(char board[][3]/*, char playerChar*/);

int main(){
    char board[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    bool win = false;
    bool in_row = false;
    bool in_col = false;
    int row;
    int column;
//    char playerChar;





// Run a loop:
    while (!win) {
    // Display the content of the board
        drawBoard(board);
        cout << "Player 1's turn: ";
    // Ask player one to chose a location (row, column)
        cout << "What is the row?: \n";
        cin >> row;
        cout << "What is the column?: \n";
        cin >> column;
    // Check if move is valid

        // Check if location has astericks and its between 0 thru 2
        bool valid = false;
        while (!valid)
        {
            // Check if the move is within range.
            if(!(row <= 3 && row >= 1 && column <= 3 && column >= 1)){
                cout << "Error: Either the row or column is not within range of the board.\n";
                // Ask again (error: row in column not within range)
                cout << "What is the row?: \n";
                cin >> row;
                cout << "What is the column?: \n";
                cin >> column;
            }
            else if(board[row-1][column-1] != '*')
            {
                cout << "Error: The (row,column) is already occupied.\n";
                cout << "What is the row?: \n";
                cin >> row;
                cout << "What is the column?: \n";
                cin >> column;
            }else {
                valid = true;
            }


        }
        board[row-1][column-1] = 'X';
        drawBoard(board);
    // Check if someone won or if there is a tie
        check_Winner(board/*, playerChar*/);
    // Ask player two to chose a location (row, column)
    cout << "Player 2's turn: ";

    cout << "What is the row?: \n";
                cin >> row;
                cout << "What is the column?: \n";
                cin >> column;
                // Check if move is valid

                // Check if location has astericks and its between 0 thru 2
                valid = false;
                while (!valid)
                {
                    // Check if the move is within range.
                    if(!(row <= 3 && row >= 1 && column <= 3 && column >= 1)){
                        cout << "Error: Either the row or column is not within range of the board.\n";
                        // Ask again (error: row in column not within range)
                        cout << "What is the row?: \n";
                        cin >> row;
                        cout << "What is the column?: \n";
                        cin >> column;
                    }
                    else if(board[row-1][column-1] != '*')
                    {
                        cout << "Error: The (row,column) is already occupied.\n";
                        cout << "What is the row?: \n";
                        cin >> row;
                        cout << "What is the column?: \n";
                        cin >> column;
                    }else
                    {
                        valid = true;
                    }
                }
        board[row-1][column-1] = 'O';
        drawBoard(board);
    // Check if someone won or  if there is a tie
        check_Winner(board/*, playerChar*/);

    }

    return 0;
}
char check_Winner(char board[][3]/*, char playerChar*/){
    char winner = 'T';
    // This checks for the tie
    for(int i=0; i<3;++i)
{
     for(int j=0; j<3;++j)
     {
         if(board[i][j]=='*')
                winner = 'W';
     }
}
// These were some attempts on trying to fix the tie thing when it turned out I had made a silly mistake
/*    // Checks row 1
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
            if(board[0][0] == playerChar){
                return 1;
            }
    }

    // Checks row 2
    if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
            if(board[1][0] == playerChar){
                return 1;
            }
    }

    // Checks row 3
    if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
            if(board[2][0] == playerChar){
                return 1;
            }
    }
*/
    // Checks for horizontal:
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            winner = board[i][0];

    // Checks for vertical:
    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            winner = board[0][i];

    // Checks for diagonal:
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        winner = board[1][1];

    // checking the result:
    switch (winner) {
        case 'T': cout << "IT'S A TIE";/* tie */ exit(1);
        case 'X': cout << "PLAYER 1 WON!";/* X won */ exit(1);
        case 'O': cout << "PLAYER 2 WON!";/* O won */ exit(1);
        default : cout << "NEXT PLAYER'S TURN... \n";
    }
    return winner;
}
void drawBoard(char board[][3])
{
    // This was just to make it look really neat
    cout << "     1   2   3" << endl;
    cout << "   ╔═══╦═══╦═══╗" << endl;

    cout << " 1" << " ║ " << board[0][0] << " ║ " << board[0][1] << " ║ " << board[0][2] << " ║ " << endl;
    cout << "   ╠═══╬═══╬═══╣" << endl;

    cout << " 2" << " ║ " << board[1][0] << " ║ " << board[1][1] << " ║ " << board[1][2] << " ║ " << endl;
    cout << "   ╠═══╬═══╬═══╣" << endl;

    cout << " 3" << " ║ " << board[2][0] << " ║ " << board[2][1] << " ║ " << board[2][2] << " ║ " << endl;
    cout << "   ╚═══╩═══╩═══╝" << endl;

}
