#include <iostream>
#include <cstdlib>
#include "Game.h"

int main()
{
	int a;
	Game gameInstance;

	std::cout << "Do you want to play this game? (Y/N)\n";
	std::cin >> a;

	if (a == 'y' || a == 'Y')
	{
		int guessByPlayer;

		bool comparity = false;

		while (!comparity)
		{
			std::cout << "Wrong Number!\n";

			std::cout << "Please Enter a Number from 1 to 100\n";

			std::cin >> guessByPlayer;

			comparity = gameInstance.compareNumber(guessByPlayer);
		}
		std::cout << "Correct! The number was " << guessByPlayer;
	}
}