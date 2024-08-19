#include <iostream>
#include <vector>

class Board
{
    private:
        int width;
        int height;
        std::vector<std::vector<char>> grid;

    
    public:
        // Constructor
        Board(int width, int height);

        void displayBoard();
};