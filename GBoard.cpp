/************************************************************
** Name: Jamie Loebe
** Date: August 11th, 2018
** Description: This is the implementation file for the 
** GBoard program. This file sets the board to empty, and the
** game unfinished to allow a new game to start. It will not
** function properly if the coordinates are out of bounds.
** It also checks to see if either 'X' or 'O' has won or if
** there is a draw.
************************************************************/

#include "GBoard.hpp"

/************************************************************
** Description: This function sets board to empty using for
** loops and sets gameState to UNFINISHED.
************************************************************/
GBoard::GBoard()
{
    // Set board to empty
    for (int i=0; i<SIZE; i++) 
    {
        for (int j=0; j<SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
    // Set state to unfinished
    gameState =  UNFINISHED;
}

/***********************************************************
** Description: This getter function returns the value of
** private variable gameState.
**********************************************************/
State GBoard::getGameState() const
{
    return gameState;
}

/***********************************************************
** Description: This function allows the players to move
** and returns false if the space desired is occupied or if
** the game is finished. It also checks if the move will be in
** bounds. If true, it will move to the desired
** space. It also checks to see if there is a draw. 
** Furthermore, it checks to see if any player has won
** by checking if there exists 5 spaces in a row with just 'X'
** or just 'O'.
************************************************************/

bool GBoard::makeMove(int row, int col, char c)
{

    // If row or col not within bounds, return false
    if (!(0 <= row && row < SIZE && 0 <= col && col < SIZE))
    {
        return false;
    }

    // If game is already finished, return false
    if (gameState != UNFINISHED)
    {
        return false;
    }

    // If square is already nonempty, return false
    if (board[row][col] != ' ')
    {
        return false;
    }
    
    // If none of these checks failed, make the actual move
    board[row][col] = c;

    //Check if board is full for a draw. Return false if board is full.
    bool full = true;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
	{
	    if (board[i][j] == ' ')
	    {
	        full = false;
	    }
	}
    }

    // Check if any player has won
    // Check in all directions
    // Left
    int n_left = 0;  // Start at 0

    while (row-n_left-1 >= 0 && board[row-n_left-1][col] == c)  // Keep going left
    // and incrementing n_left until we reach a square that is not c, or the end of the board
        n_left++;
   
    // Right
    int n_right = 0;

    while (row+n_right+1 < SIZE && board[row+n_right+1][col] == c)
        n_right++;

    // Up
    int n_up = 0;

    while (col-n_up-1 >= 0 && board[row][col-n_up-1] == c)
        n_up++;

    // Down
    int n_down = 0;

    while (col+n_down+1 < SIZE && board[row][col+n_down+1] == c)
        n_down++;

    // Up-left
    int n_upleft = 0;

    while (row-n_upleft-1 >= 0 && col-n_upleft-1 >= 0 && board[row-n_upleft-1][col-n_upleft-1] == c)
        n_upleft++;

    // Up-right
    int n_upright = 0;

    while (row+n_upright+1 < SIZE && col-n_upright-1 >= 0 && board[row+n_upright+1][col-n_upright-1] == c)
        n_upright++;

    // Down-left
    int n_downleft = 0;

    while (row-n_downleft-1 >= 0 && col+n_downleft+1 < SIZE && board[row-n_downleft-1][col+n_downleft+1] == c)
        n_downleft++;

    // Down-right
    int n_downright = 0;

    while (row+n_downright+1 < SIZE && col+n_downright+1 < SIZE && board[row+n_downright+1][col+n_downright+1] == c)
        n_downright++;

    // Check if any direction is >= 5
    if (n_left+n_right+1 >= 5
    || n_up+n_down+1 >=  5
    || n_upleft+n_downright+1 >=  5
    || n_upright+n_downleft+1 >=  5)

        {
            // Then player has won: update the state
            if (c == 'x')
            {
                gameState = X_WON;
            }
	    else if (c == 'o')
            {
                gameState = O_WON;
            }
        }
	
	// Or it is a draw if the board is full and no winner
	else if (full)
	{
	    gameState = DRAW;
	}
    return true;
}
