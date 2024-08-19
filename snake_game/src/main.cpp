#include <iostream>
#include <windows.h>
#include "board.h"

int main()
{
    Board tablero;

    tablero.displayBoard();
    for(int i = 0; i < 10; i++)
    {
        tablero.updateBoard(i + 1, 9);
        system("cls");
        tablero.displayBoard();

    }
}