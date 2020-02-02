#include "Minesweeper.h"

bool Minesweeper::create(std::string fileName, sf::Vector2u tileSize, int difficulty = 1)
{
	fieldSize = 10;					//clear all fields
	Minesweeper::clearField();
	fieldSize = 20;
	Minesweeper::clearField();
	fieldSize = 30;
	Minesweeper::clearField();

	if (difficulty == 3)			//set correct field size
		fieldSize = 30;
	else if (difficulty == 2)
		fieldSize = 20;
	else
		fieldSize = 10;

	if (!texture.loadFromFile(fileName))
		return false;


}

void Minesweeper::clearField()
{
	for (int i = 0; i < fieldSize; i++)
		for (int j = 0; j < fieldSize; j++)
			Minesweeper::writeOn(i, j, 0);
}

void Minesweeper::writeOn(int i, int j, int value)
{
	if (fieldSize == 30)
		field3[i][j] = value;
	else if (fieldSize == 20)
		field2[i][j] = value;
	else
		field1[i][j] = value;
}
