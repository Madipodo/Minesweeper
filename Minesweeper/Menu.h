#pragma once
#include <iostream>
#include <string>

class Menu
{
public:
    void drawMenu();
    bool drawWinScreen(bool won);

    int getFieldSize();
    int getMode();

    void clear();

private: 
    void drawOptionMenu();
    int mode;

    int difficulty = 1;
    int minSizeField = 12;
    int maxSizeField = 30;

};

