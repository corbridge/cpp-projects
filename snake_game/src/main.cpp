#include <iostream>
#include <windows.h>
#include "board.h"

int height = 20;
int width = 70;

int SnakePosition_width = 1;
int SnakePosition_height = 4;

int main()
{
    Board tablero(width, height);
    tablero.displayBoard();
}