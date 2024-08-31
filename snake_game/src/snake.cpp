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
    
    if (GetAsyncKeyState('A') & 0x8000) 
    {
        width++;
    }

    // Check if 'S' key is pressed
    if (GetAsyncKeyState('S') & 0x8000) 
    {
        width--;
    }

    current_position.X = width;
    return current_position;
}