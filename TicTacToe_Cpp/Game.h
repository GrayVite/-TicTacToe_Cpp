#pragma once

#include "GameBoard.h"
#include "gamePlayer.h"
#include "GameMenu.h"

class Game
{
public:
	char board[3][3];
	bool isRunning;
	char player;
	char winner;
	
	int startGame();
};

