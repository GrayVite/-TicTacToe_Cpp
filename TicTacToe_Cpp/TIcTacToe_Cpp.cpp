#include <iostream>
#include "GameBoard.h"
#include "GameMenu.h"
#include "Game.h"

using namespace std;

int main()
{	
a:

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
		strt = 0;
	}

	goto a;

	return 0;
}
