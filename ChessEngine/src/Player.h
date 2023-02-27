#pragma once

#include "Details.h"
#include "Piece.h"

#include <string>
#include <vector>
#include <memory>

class Player
{
public:
    std::string name() { return name_; };
    Color color() { return color_; };
    std::vector<Piece*>  init_pieces();
    std::vector<Piece*> alive_pieces(){return alive_pieces_;};

    void set_alive_pieces(std::vector<Piece*> alive_pieces){
        this->alive_pieces_ = alive_pieces;
    };

private :
    std::string name_;
    Color color_;
    std::vector<Piece*> alive_pieces_;
};
