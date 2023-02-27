#pragma once

#include "player.h"
#include "details.h"

class Game 
{
public:
    Player& get_white_player() { return white_player; }
    const Player& get_white_player() const  { return white_player; }

    Player& get_black_player() { return black_player; }
    const Player& get_black_player() const  { return black_player; }

    GameState get_game_state() const { return game_state; }

    Color get_turn() const { return turn; }

    class Board
    {
        std::array<std::array<Piece*, 8>, 8> pieces;

        piece.move()
        
        borad.move()
    };

private:
    Player white_player;
    Player black_player;
    GameState game_state;
    Color turn;
};

 
