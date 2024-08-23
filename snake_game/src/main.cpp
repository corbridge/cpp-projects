#include <iostream>
#include <windows.h>
#include "board.h"

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD cursorPos = {0, 0};

    Board tablero;

    tablero.displayBoard();
    for(int i = 0; i < 10; i++)
    {
        tablero.updateBoard(i + 1, 9);
        SetConsoleCursorPosition(hConsole, cursorPos);
        tablero.displayBoard();
        Sleep(20);

    }
}