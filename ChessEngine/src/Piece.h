#pragma once

#include "Details.h"
#include <vector>

class Piece
{    
public:
    Piece(PieceType piece_type, Position position, Color color)
        : piece_type_(piece_type),
          position_(position),
          color_(color)
    {}

    virtual std::vector<Position> get_possible_moves();

    //Getters
    const Position& position() const { return position_; };
    Position& position() { return position_; };
    bool get_has_moved() const { return has_moved_; };
    PieceType get_piece_type() const{ return piece_type_; }
    Color get_color() const{ return color_; }

protected:
    PieceType piece_type_;
    Position position_;
    bool has_moved_ = false;
    Color color_;
};

