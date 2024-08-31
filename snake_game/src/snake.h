#include <iostream>
#include <vector>
#include <windows.h>

class Snake
{
    private:
        int snake_length = 1;
        COORD current_position;

    public:
        Snake(COORD initial_position);
        
        COORD getUpdatedPosition();
};