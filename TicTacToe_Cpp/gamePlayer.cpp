#include "gamePlayer.h"
#include <iostream>

using namespace std;

int gamePlayer::validateInput(const char* prompt)
{
    int input;
    cout << prompt;

    while (true)
    {
        if (cin >> input)
        {
            if (input >= 1 && input <= 3)
            {
                return input;
            }
            else
            {
                cout << "Please enter a number between 1 and 3: ";
            }
        }
        else
        {
            cout << "Please enter a whole number: ";
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

pair<int, int> gamePlayer::getPlayerInput()
{
    // We'll create a function called getPlayerInput() that will handle the input logic. This function will:

    // 1. Display input prompts for row and column
    // 2. Validate the input to ensure it's within the valid range
    // 3. Handle invalid inputs gracefully
    // 4. Return the valid row and column as a pair of integers

    int row = validateInput("Enter the number of row: ");
    int col = validateInput("Enter the number of column: ");

    return make_pair(row, col);
}

void gamePlayer::switchPlayer(char& player)
{
    if (player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}