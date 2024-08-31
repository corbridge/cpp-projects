#include <iostream>
#include <windows.h>
#include "board.h"
#include "snake.h"

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD initial_position = {0, 0};
    COORD current_position;

    Board tablero;
    Snake snake(initial_position);

    system("cls");
    while(!(GetAsyncKeyState(VK_ESCAPE) & 0x8000))
    {
        SetConsoleCursorPosition(hConsole, initial_position);
        current_position = snake.getUpdatedPosition();
        tablero.updateBoard(current_position);
        tablero.displayBoard();
    }
}