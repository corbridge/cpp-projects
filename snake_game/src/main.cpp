#include <iostream>
#include <windows.h>
#include "board.h"

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD cursorPos = {0, 0};

    Board tablero;
    system("cls");
    while(!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
    {
        SetConsoleCursorPosition(hConsole, cursorPos);
        tablero.updateBoard(1, 9);
        tablero.displayBoard();
    }
}