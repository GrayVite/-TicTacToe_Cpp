#include "GameMenu.h"
#include <iostream>

using namespace std;

int GameMenu::displayMenu()
{
    int choice;

    cout << "*******************************************" << endl;
    cout << "              TIC TAC TOE GAME             " << endl;
    cout << "*******************************************" << endl;
    cout << "Select from the following: " << endl;
    cout << "1. Start New Game \n2. Game Instructions \n3. View High Scores \n4. Exit Game \n";
    cout << "Enter 1-4: ";
    cin >> choice;

    handleMenuChoice(choice);

    return choice;
}

void GameMenu::handleMenuChoice(int choice)
{
    switch (choice)
    {
    case 1:
    {
        cout << "Starting New Game..." << endl;

        break;
    }
    case 2:
    {
        cout << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "Player 1 will be 'X' and Player 2 will be 'O'." << endl;
        cout << "To make a move, simply enter the row and column numbers." << endl;

        break;
    }
    case 3:
    {
        int gamesPlayed = 0;
        int winsX = 0;
        int winsO = 0;
        int ties = 0;

        cout << "Game Statistics" << endl;
        cout << "Games Played: " << gamesPlayed << endl;
        cout << "Wins by X: " << winsX << endl;
        cout << "Wins by O: " << winsO << endl;
        cout << "Ties: " << ties << endl;

        break;
    }
    case 4:
    {
        cout << "Quitting Game" << endl;
        exit(0);
    }
    default:
    {
        cout << "Invalid Choice. Please enter valid number from 1-4" << endl;

        break;
    }
    }
}