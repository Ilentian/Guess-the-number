#include "Game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Game::Game()
{
	Game gamed;
	gamed.generatedNumber = 0;
}

bool Game::startGame()
{
	return true;
}

bool Game::compareNumber(unsigned int a)
{
	Game gameObj;

	if (gameObj.generatedNumber == 0)
	{
		srand(time(0));

		gameObj.generatedNumber = (1 + (rand() % 100));
	}

	if (a == gameObj.generatedNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}