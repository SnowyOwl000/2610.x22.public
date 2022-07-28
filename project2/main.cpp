#include <iostream>

using namespace std;

int
    board[9];       // game board... 0, 1, 2 on top, 3, 4, 5 in the middle, 6, 7, 8 at bottom

//============================================================================
// int score(int cell1,int cell2,int cell3)
//   Add and return score for the three given cells
//
// Parameters
//   cell1 - first cell index
//   cell2 - second cell index
//   cell3 - third cell index
//
// Returns
//   board[cell1] + board[cell2] + board[cell3]
//

int score(int cell1,int cell2,int cell3) {

    return board[cell1] + board[cell2] + board[cell3];
}



//============================================================================
// bool playerWins(int playerNum)
//   Determine if the given player has won the game
//
// Parameter
//   playerNum - 1 if player is X, -1 if player is O
//
// Returns
//   true if player has won, false otherwise
//

bool playerWins(int playerNum) {

}



//============================================================================
// bool canWin(int playerNum,int &cell)
//   Return true if player can win on this move, and find the winning move
//
// Parameters
//   playerNum - 1 if player is X, -1 if player is O
//   cell      - Reference parameter, filled in with winning move if it exists
//
// Returns
//   true if player can win, false otherwise
//

bool canWin(int playerNum,int &cell) {

}



//============================================================================
// void printBoard()
//   Display the game board
//

void printBoard() {

    cout << "\033[2J\033[H"
            "   |   |\n ";
    // top-left cell
    if (board[0] == 1)
        cout << 'X';
    else if (board[0] == -1)
        cout << 'O';
    else
        cout << '1';
    cout << " | ";
    // top-center
    if (board[1] == 1)
        cout << 'X';
    else if (board[1] == -1)
        cout << 'O';
    else
        cout << '2';
    cout << " | ";
    // top-right
    if (board[2] == 1)
        cout << 'X';
    else if (board[2] == -1)
        cout << 'O';
    else
        cout << '3';
    cout << "\n   |   |\n---+---+---\n   |   |\n ";
    // mid-left cell
    if (board[3] == 1)
        cout << 'X';
    else if (board[3] == -1)
        cout << 'O';
    else
        cout << '4';
    cout << " | ";
    // center
    if (board[4] == 1)
        cout << 'X';
    else if (board[4] == -1)
        cout << 'O';
    else
        cout << '5';
    cout << " | ";
    // mid-right
    if (board[5] == 1)
        cout << 'X';
    else if (board[5] == -1)
        cout << 'O';
    else
        cout << '6';
    cout << "\n   |   |\n---+---+---\n   |   |\n ";
    // bottom-left cell
    if (board[6] == 1)
        cout << 'X';
    else if (board[6] == -1)
        cout << 'O';
    else
        cout << '7';
    cout << " | ";
    // bottom-center
    if (board[7] == 1)
        cout << 'X';
    else if (board[7] == -1)
        cout << 'O';
    else
        cout << '8';
    cout << " | ";
    // bottom-right
    if (board[8] == 1)
        cout << 'X';
    else if (board[8] == -1)
        cout << 'O';
    else
        cout << '9';
    cout << "\n   |   |" << endl;
}



//============================================================================
// int getComputerMove(int computerNum)
//   Generate computer's next move
//
// Parameter
//   computerNum - 1 if computer is X, -1 if computer is O
//
// Returns
//   cell number (0-8) that computer chooses
//

int getComputerMove(int computerNum) {

}



//============================================================================
// int getHumanMove(int humanNum)
//   Generate human's next move
//
// Parameter
//   humanNum - 1 if human is X, -1 if human is O
//
// Returns
//   cell number (0-8) that human chooses
//

int getHumanMove(int humanNum) {

}

int main() {
    // variables

    // step 1: determine X and O

    // step 2: loop 9 iterations (or until someone wins)

        // step 2.1: if computer move, get computer move and update board

        // step 2.2: if human move, display board, get human move and update board

        // step 2.3: if not done in the loop check, check for winner and break if necessary

        // step 2.4: it's the other player's move now

    // step 3: determine winner, if any

    return 0;
}
