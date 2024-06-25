#include "Header.h"
#include <iostream>

using namespace std;

World::World(int size, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        string row;
        for (int j = 0; j < size; ++j)
        {
            row += (rand() % 2 == 0) ? '0' : ' ';
        }
        grid.push_back(row);
    }
}

void World::see()
{
    for (const auto &row : grid)
    {
        cout << row << endl;
    }
}

void World::update()
{
    vector<string> grid2 = grid;

    for (int x = 0; x < grid.size(); ++x)
    {
        for (int y = 0; y < grid[x].size(); ++y)
        {
            if (livingNeigbours(x, y) > 3)
            {
                grid2[x][y] = ' ';
            }
            else if (livingNeigbours(x, y) < 2)
            {
                grid2[x][y] = ' ';
            }
            else if (livingNeigbours(x, y) == 3)
            {
                grid2[x][y] = '0';
            }
        }
    }
    grid = grid2;
}

int World::livingNeigbours(int i, int j)
{
    int counter = 0;

    // checkt Nachbarn oben
    if (i != 0)
    {
        if (grid[i - 1][j] == '0')
        {
            counter++;
        }
    }
    // checkt Nachbarn links
    if (j != 0)
    {
        if (grid[i][j - 1] == '0')
        {
            counter++;
        }
    }
    // checkt Nachbarn unten
    if (i < grid.size() - 1)
    {
        if (grid[i + 1][j] == '0')
        {
            counter++;
        }
    }
    // checkt Nachbarn rechts
    if (j < grid[i].size() - 1)
    {
        if (grid[i][j + 1] == '0')
        {
            counter++;
        }
    }

    // checkt Nachbarn oben link
    if (i != 0 && j != 0)
    {
        if (grid[i - 1][j - 1] == '0')
        {
            counter++;
        }
    }
    // checkt Nachbarn oben rechts
    if (i != 0 && j < grid[i].size() - 1)
    {
        if (grid[i - 1][j + 1] == '0')
        {
            counter++;
        }
    }
    // checkt Nachbarn unten links
    if (i < grid.size() - 1 && j != 0)
    {
        if (grid[i + 1][j - 1] == '0')
        {
            counter++;
        }
    }
    // checkt Nachbarn unten rechts
    if (i < grid.size() - 1 && j < grid[i].size() - 1)
    {
        if (grid[i + 1][j + 1] == '0')
        {
            counter++;
        }
    }

    return counter;
}