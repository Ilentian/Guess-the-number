#include "L1.h"
#include <iostream>
#include <limits>
#include <random>

bool L1::compareToGenNumber(int guess, bool restartGame)
{
	if (restartGame) number = 0;

	if (number != 0)
	{
		if (number == guess) return true;

		return false;
	}

	else
	{
		std::random_device rd;

		std::seed_seq ss{ rd(),rd(), rd(), rd(), rd(), rd(), rd(), rd() };

		std::mt19937 mt{ ss };

		std::uniform_int_distribution d100{ 1, 100 };

		number = d100(mt);

		if (number == guess) return true;

		return false;
	}
}

int L1::getNumInput(bool restart)
{
	static int guessNo{ 1 };

	if (restart) guessNo = 1;

	if (guessNo == 7) guessNo = 1;

	std::cout << "Guess #" << guessNo << ": ";

	int x{ };

	std::cin >> x;

	if (std::cin.fail())
	{
		std::cin.clear();

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	guessNo++;

	return x;
}

char L1::greLowGenNum(int guess)
{
	if (guess < number) return '<';

	if (guess > number) return '>';

	return '=';
}

int L1::getGenNumber()
{
	return number;
}

bool L1::playAgain()
{
	while (true)
	{
		std::cout << "Would you like to play again (y/n) ?: ";

		char ch{ };

		std::cin >> ch;

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}