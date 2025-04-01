#pragma once
class GameBoard
{
public:
	void displayBoard(char board[3][3], char currentplayer);
	void initBoard(char board[3][3]);
	bool isBoardFull(char board[3][3]);
};

