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
    width++;
    current_position.X = width;
    return current_position;
}