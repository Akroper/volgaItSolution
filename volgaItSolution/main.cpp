#include "fairy_tail.hpp"
#include <cstdlib>
#include <ctime>

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
    
    pair<int, int> ivanPos (0, 0);
    pair<int, int> elenaPos (0, 0);
    srand(static_cast<unsigned int>(time(nullptr)));
    Fairyland world;
    if (world.canGo(Character::Ivan, Direction::Left))ivanPos.first = 0;
    else if (world.canGo(Character::Ivan, Direction::Right))ivanPos.first = 9;
    if (world.canGo(Character::Ivan, Direction::Up))ivanPos.second = 0;
    else if (world.canGo(Character::Ivan, Direction::Down))ivanPos.second = 9;
    if (world.canGo(Character::Elena, Direction::Left))elenaPos.first = 0;
    else if (world.canGo(Character::Elena, Direction::Right))elenaPos.first = 9;
    if (world.canGo(Character::Elena, Direction::Up))elenaPos.second = 0;
    else if (world.canGo(Character::Elena, Direction::Down))elenaPos.second = 9;
    cout << world.canGo(Character::Ivan, Direction::Down);
    return 0;
}
