#include "board.h"

Board::Board(int width, int height) 
{
    // Inicializa el tablero vacío
    grid.resize(height, std::vector<char>(width, ' '));

    for (int i = 0; i < width; ++i) {
        grid[0][i] = grid[height - 1][i] = '#';
    }
    for (int i = 0; i < height; ++i) {
        grid[i][0] = grid[i][width - 1] = '#';
    }
}

void Board::displayBoard()
{
    for (const auto& row : grid)
    {
        for(char cell : row)
        {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}
