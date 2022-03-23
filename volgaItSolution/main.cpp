#include <cstdlib>
#include <vector>
#include <ctime>
#include "fairy_tail.hpp"
#include "main.h"

using namespace std;
/*
int walk()
{
    Fairyland world;

    for (int i = 0; i < 10000; ++i)
    {
        Direction direction;

        switch (rand() % 4)
        {
        case 0:
            direction = Direction::Up;
            break;

        case 1:
            direction = Direction::Down;
            break;

        case 2:
            direction = Direction::Left;
            break;

        default:
            direction = Direction::Right;
            break;
        }

        if (world.canGo(Character::Ivan, direction) && world.go(direction, Direction::Pass))
            return world.getTurnCount();
    }

    return 0;
}
*/

int main()
{
    Fairyland world;
    vector<vector<char>> worldMap;
    vector<vector<char>> ivanMap;
    vector<vector<char>> elenaMap;
    srand(static_cast<unsigned int>(time(nullptr)));
    cout << world.canGo(Character::Ivan, Direction::Down);
    return 0;
}
