#include <iostream>
#include <vector>

class Board
{
    private:
        int height = 20;
        int width = 70;
        std::vector<std::vector<char>> grid;
        std::vector<std::vector<char>>emptyGrid;
    
    public:
        // Constructor
        Board();

        void displayBoard();
        void clearBoard();
        void updateBoard(int pos_x, int pos_y);
};