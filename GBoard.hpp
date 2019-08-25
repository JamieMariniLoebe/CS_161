/*************************************************************************************
** Author: Jamie Loebe
** Date: August, 11th, 2018
** Description: This program is the header file for the GBoard.cpp implementation
** file. It declares the GBoard class, and the enum class State.
*************************************************************************************/

#ifndef GBOARD_hpp
#define GBOARD_hpp

enum State {X_WON, O_WON, DRAW, UNFINISHED};

const int SIZE = 15;

class GBoard
{
private:
    char board[SIZE][SIZE];
    State gameState;
public:
    GBoard();
    State getGameState() const;
    bool makeMove(int row, int col, char c);
};


#endif



