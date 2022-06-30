#include <iostream>
#include "Game.h"

int main()
{
	L1 L1_inst;
	
	std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";
	
	do
	{
		bool won{ false };

		for (int i{ 0 }; i < 7; i++)
		{
			int guess{ L1_inst.getNumInput(false) };

			if (!L1_inst.compareToGenNumber(guess, false))
			{
				switch (L1_inst.greLowGenNum(guess))
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
			std::cout << "You lost. The correct number was " << L1_inst.getGenNumber() << '\n';
		}

	} while (L1_inst.playAgain());



	system("pause");

	return 0;
}
