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
    cout << "1. Start New Game \n2. Game Instructions \n3. Exit Game \n";
    cout << "Enter 1-3: ";
    cin >> choice;

    int result = handleMenuChoice(choice);

    return result;
}

int GameMenu::handleMenuChoice(int choice)
{
    switch (choice)
    {
    case 1:
    {
        cout << "Starting New Game..." << endl;
        return 1;
    }
    case 2:
    {
        cout << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "Player 1 will be 'X' and Player 2 will be 'O'." << endl;
        cout << "To make a move, simply enter the row and column numbers." << endl;

        displayMenu();

    }

    case 3:
    {
        cout << "Quitting Game" << endl;
        exit(0);
    }
    default:
    {
        cout << "Invalid Choice. Please enter valid number from 1-3" << endl;
        displayMenu();

    }
    }
}