#pragma once

#include "fairy_tail.hpp"
#include <cstdlib>
#include <vector>

using namespace std;

/*
pair<int, int> defineOriginPosition(Character character) {
    Fairyland world;
    pair<int, int> position (0, 0);
    if (world.canGo(character, Direction::Right))position.first = 0;
    else if (world.canGo(character, Direction::Left))position.first = 9;
    if (world.canGo(character, Direction::Down))position.second = 0;
    else if(world.canGo(character, Direction::Up))position.second = 9;
    return position;
}
*/
char trSigToMap(bool sig) {
    if (sig)return '.';
    else return '#';
}
void scan(vector<vector<char>>, Character);
void scan(vector<vector<char>>, Character, Direction);

void scan(vector<vector<char>> currentMap, Character character) {
    Fairyland world;
    currentMap[0].push_back('?');
    currentMap[0].push_back(trSigToMap(world.canGo(character, Direction::Up));
}

void scan(vector<vector<char>> currentMap, Character character, Direction lastDirection) {

}