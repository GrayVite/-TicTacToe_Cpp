#include <iostream>
#include "GameBoard.h"

void GameBoard::displayBoard(char board[3][3], char currentPlayer)
{
    std::cout << " +---+---+---+ \n";

    for (int row = 0; row < 3; row++)
    {
        std::cout << " | ";
        for (int col = 0; col < 3; col++)
        {
            std::cout << board[row][col];
            std::cout << " | ";
        }
        std::cout << std::endl;
        std::cout << " +---+---+---+ \n";
    }

    std::cout << "Current Turn: Player " << currentPlayer << std::endl;
}

void GameBoard::initBoard(char board[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            board[row][col] = ' ';
        }
    }
}

bool GameBoard::isBoardFull(char board[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (board[row][col] == ' ')
            {
                return false;
            }
        }
    }

    return true;
}