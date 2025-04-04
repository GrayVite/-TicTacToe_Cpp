#include "Game.h"

int Game::startGame()
{
	isRunning = true;
	player = 'X';

	gamePlayer* newPlayer = new gamePlayer();
	GameBoard* gameBoard = new GameBoard();
	gameBoard->initBoard(board);

	while (isRunning)
	{
		gameBoard->displayBoard(board, player);
		std::pair<int, int> playerIn = newPlayer->getPlayerInput();
		winner = gameBoard->updateBoard(board, player, playerIn);

		if (winner == ' ')
		{
			newPlayer->switchPlayer(player);
		}
		else if (winner == 'E')
		{
			continue;
		}
		else if (winner == 'F')
		{
			gameBoard->displayTie(board);
			isRunning = false;
		}
		else if (winner == 'X' || winner == 'O')
		{
			gameBoard->displayWin(board, winner);
		}
		else
		{
			std::cout << "Error in Game.cpp\n";
			isRunning = false;
		}
	}

	if (!isRunning)
	{
		delete gameBoard;
		delete newPlayer;
	}

	std::cout << "Returning to main menu...\n";
	return 1;
}