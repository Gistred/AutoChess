#pragma once
#include "Piece.h"
#include "../Details.h"

class King : public Piece {

    King(Color color_) : Piece(PieceType::King, {0, 0}, color_) {};
    std::vector<Position> get_possible_moves();
};