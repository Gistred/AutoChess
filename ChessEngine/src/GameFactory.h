#pragma once

#include "Game.h"
#include "Details.h"
#include <vector>

class GameFactory
{
public:
    static Game create_basic_game()
    {
        Game res;

        return res;
    }

};