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

char GameBoard::checkRow(char board[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][0] != ' ')
        {
            return board[row][1];
        }
    }
    return ' ';
}

char GameBoard::checkColumn(char board[3][3])
{
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != ' ')
        {
            return board[0][col];
        }
    }
    return ' ';
}

char GameBoard::checkDiagnol(char board[3][3])
{
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';
}

char GameBoard::checkWinner(char board[3][3])
{
    char winner = ' ';

    winner = checkRow(board);
    if (winner != ' ')
    {
        return winner;
    }

    winner = checkColumn(board);
    if (winner != ' ')
    {
        return winner;
    }

    winner = checkDiagnol(board);
    if (winner != ' ')
    {
        return winner;
    }

    return ' ';
}

char GameBoard::updateBoard(char board[3][3], char currentPlayer, std::pair<int, int> input)
{
    int rowIndex = input.first - 1;
    int colIndex = input.second - 1;

    // Check if the cell is empty before updating
    if (board[rowIndex][colIndex] == ' ')
    {
        board[rowIndex][colIndex] = currentPlayer;

        // Check for winner
        char Winner = checkWinner(board);
        if (Winner != ' ')
        {
            return Winner; // Return winner if there is one
        }

        // Check for tie
        if (isBoardFull(board))
        {
            return 'F'; // Return 'F' for full board (tie)
        }

        return ' '; // Return space to indicate the game should continue
    }
    else
    {
        // Cell is already occupied
        return 'E'; // Return 'E' to indicate an error
    }
}


void GameBoard::displayTie(char board[3][3])
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

    std::cout << "The game has ended in a Tie \n";
}

void GameBoard::displayWin(char board[3][3], char currentplayer)
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

    std::cout << "Player " << currentplayer << " has won the Game\n";
}