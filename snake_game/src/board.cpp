#include "board.h"

Board::Board() 
{
    // Inicializa el tablero vacío
    grid.resize(height, std::vector<char>(width, ' '));

    for (int i = 0; i < width; ++i) {
        grid[0][i] = grid[height - 1][i] = '-';
    }
    for (int i = 0; i < height; ++i) {
        grid[i][0] = grid[i][width - 1] = '|';
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

void Board::updateBoard(COORD position)
{
    if(position.X < width - 2 && position.Y < height - 2)
    {
        grid[position.Y][position.X] = 'o';
    }
    else
    {
        std::cout<<"Wrong position"<<std::endl;
    }
}

void Board::clearBoard()
{
    emptyGrid.resize(height, std::vector<char>(width, ' '));
    for (const auto& row : emptyGrid)
    {
        for(char cell : row)
        {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}

int Board::getHeight()
{
    return height;
}

int Board::getWidth()
{
    return width;
}