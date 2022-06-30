#include <iostream>
#include "Game.h"

int main()
{
	Game Game_inst;
	
	do
	{
		std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";
		
		bool won{ false };

		for (int i{ 0 }; i < 7; i++)
		{
			int guess{ Game_inst.getNumInput(false) };

			if (!Game_inst.compareToGenNumber(guess, false))
			{
				switch (Game_inst.greLowGenNum(guess))
				{
				case '<':
					std::cout << "Your guess is too low\n";
					break;
				case '>':
					std::cout << "Your guess is too high\n";
					break;
				}
			}

			else
			{
				won = true;

				std::cout << "You won!\n";
			}
		}

		if (!won)
		{
			std::cout << "You lost. The correct number was " << Game_inst.getGenNumber() << '\n';
		}

	} while (Game_inst.playAgain());

	system("pause");

	return 0;
}
