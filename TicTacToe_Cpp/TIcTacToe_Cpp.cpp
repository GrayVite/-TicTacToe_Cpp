#include <iostream>
#include "GameBoard.h"
#include "GameMenu.h"
#include "Game.h"

using namespace std;

int main()
{	
	int run = 0;

	GameMenu* menu = new GameMenu();

	int strt = menu->displayMenu();

	while (strt == 1)
	{
		Game* game = new Game();
		while (run == 0)
		{
			run = game->startGame();
			if (run == 1)
			{
				delete game;
				break;
			}
		}
	}

	return 0;
}
