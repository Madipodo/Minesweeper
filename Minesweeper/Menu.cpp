#include "Menu.h"

void Menu::drawMenu()
{
	Menu::clear();
	do {
		mode = 0;
		std::cout << "\n\tMinesweeper\n\nMenu:\n\n1 - Play\n2 - Option\n3 - Quit\n\nInput: ";
		char input;
		std::cin >> input;
		switch (input)
		{
		case ('1'):
			mode = 1;
			break;
		case ('2'):
			Menu::drawOptionMenu();
			mode = 99;
			break;
		case ('3'):
			mode = 3;
			break;
		default:
			Menu::clear();
			mode = 99;
			std::cout << "Invalid input try again!!!\n\n";
		}
	} while (mode == 99);
}

bool Menu::drawWinScreen(bool won)
{
	if (won)
		std::cout << "\nCongratilation you won!!!\n\n\n";
	else
		std::cout << "\nYou lost!!!\n\n\n";
	std::cout << "Wanna play again ? [y / n]\n";
	char input;
	std::cin >> input;
	if (input == 'y')
		return true;
	else
		return false;
}

int Menu::getFieldSize()
{
	return difficulty;
}

int Menu::getMode()
{
	return mode;
}

void Menu::clear()
{
	system("cls");
}


void Menu::drawOptionMenu()
{
	Menu::clear();
	do{
	
	std::cout << "How big shall the field be?\n1 - EASY: 10x10\n2 - NORMAL: 20x20\n3 - HARD: 30x30\n\nInput: ";
	char input = '0';
	std::cin >> input;
	difficulty = input - '0';
	if (difficulty < 1 || difficulty > 3)
	{
		Menu::clear();
		difficulty = 0;
		std::cout << "Invalid input try again!!!\n\n";
	}
	} while (difficulty != 0);
	Menu::clear();
}