#include "snake.h"


Snake::Snake(COORD initial_position)
{
    //Initiliaze Snake
    initial_position.X++;
    initial_position.Y++;
    current_position = initial_position;

}

COORD Snake::getUpdatedPosition()
{
    static int width = current_position.X;
    static int height = current_position.Y;
    
    if (GetAsyncKeyState('D') & 0x8000) 
    {
        width++;
    }

    // Check if 'S' key is pressed
    if (GetAsyncKeyState('A') & 0x8000) 
    {
        width--;
    }

    if (GetAsyncKeyState('W') & 0x8000) 
    {
        height--;
    }

    // Check if 'S' key is pressed
    if (GetAsyncKeyState('S') & 0x8000) 
    {
        height++;
    }

    current_position.X = width;
    current_position.Y = height;
    return current_position;
}