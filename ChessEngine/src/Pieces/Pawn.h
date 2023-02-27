#pragma once
#include "Piece.h"
#include "Details.h"

class Pawn : public Piece {

    Pawn(Color color_) : Piece(PieceType::Pawn, {0, 0}, color_) {};
    std::vector<Position> get_possible_moves();
};