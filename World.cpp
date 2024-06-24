#include "Header.h"
#include <iostream>

World::World(int size, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        std::string row;
        for (int j = 0; j < size; ++j)
        {
            row += (rand() % 2 == 0) ? '0' : '.';
        }
        grid.push_back(row);
    }
}

void World::see()
{
    for (const auto &row : grid)
    {
        std::cout << row << std::endl;
    }
}

void World::update()
{
    // update
}

int World::livingNeigbours(int i)
{
    return 0;
}