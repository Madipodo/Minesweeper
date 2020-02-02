#include "Menu.h"

int main()
{
    int fieldSize = 0;
    int won = 0; 
    while(true)
    {
        Menu menu;
        menu.drawMenu();
        switch (menu.getMode())
        {
        case(1): 
            menu.clear();
            // Start the Game           
            fieldSize = menu.getFieldSize();
            

            // --------------
            
            if (!menu.drawWinScreen(won))
                return 0;
            break;
        case(3):
            return 0;
        default:
            return -1;
            break;
        }
    }
}