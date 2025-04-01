#pragma once
#include <iostream>

class player
{
public:
	void switchPlayer(char& currentPlayer);
	int validateInput(const char* prompt);
	std::pair<int, int> getPlayerInput();
};

