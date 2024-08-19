#include <iostream>
#include <vector>

class Board
{
    private:
        int height = 20;
        int width = 70;
        std::vector<std::vector<char>> grid;

    
    public:
        // Constructor
        Board();

        void displayBoard();

        void updateBoard(int pos_x, int pos_y);
};