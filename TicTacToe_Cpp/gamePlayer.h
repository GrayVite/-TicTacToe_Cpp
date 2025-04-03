#pragma once
#include <iostream>

class gamePlayer
{
public:
	void switchPlayer(char& currentPlayer);
	int validateInput(const char* prompt);
	std::pair<int, int> getPlayerInput();
};

