#pragma once

#include "../Piece.h"

class Pawn : public Piece
{
public:
    Pawn(Position position , Color color_)
        : Piece(PieceType::Pawn, position, color_)
    {}

public:
    std::vector<Position> get_possible_moves(Board& board) override;
};
