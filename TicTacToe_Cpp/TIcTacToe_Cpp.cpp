#include <iostream>
#include "GameBoard.h"

using namespace std;

int main()
{
	char board[3][3];
	GameBoard boardOps;

	boardOps.initBoard(board);
	boardOps.displayBoard(board, 'X');

	return 0;
}
