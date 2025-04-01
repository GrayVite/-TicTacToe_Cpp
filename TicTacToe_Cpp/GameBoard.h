#pragma once
class GameBoard
{
public:
	void displayBoard(char board[3][3], char currentplayer);
	void initBoard(char board[3][3]);
	bool isBoardFull(char board[3][3]);

	char checkRow(char board[3][3]);
	char checkColumn(char board[3][3]);
	char checkDiagnol(char board[3][3]);
	char checkWinner(char board[3][3]);

	bool updateBoard(char board[3][3], char currentPlayer, std::pair<int, int> input);
};

