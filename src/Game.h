#ifndef Game_H
#define Game_H
#pragma once

class Game
{
public:
  	int getNumInput(bool restart);

	bool compareToGenNumber(int guess, bool restartGame);

	char greLowGenNum(int guess);

	int getGenNumber();

	bool playAgain();
private:
	int number{ 0 };
};

#endif

