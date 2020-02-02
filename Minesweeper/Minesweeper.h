#pragma once
#include <string>
#include <SFML/Graphics.hpp>

class Minesweeper
{
public:
	bool create (std::string fielName, sf::Vector2u tielSize, int difficulty = 1);

private:
	void writeOn(int i, int j, int value);
	void clearField();

	int fieldSize = 0;
	int field1 [10][10];
	int field2 [20][20];
	int field3 [30][30];

	sf::Texture texture;
};

