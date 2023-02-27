#pragma once

#include "Details.h"
#include "Piece.h"

#include <string>
#include <vector>
#include <memory>

class Player
{
public:
    std::string& get_name() { return name; }
    Color& get_color() { return color; }
    std::vector<std::unique_ptr<Piece>>& get_alive_pieces() { return alive_pieces; }

private:
    std::string name;
    Color color;
    std::array<std::unique_ptr<Piece>, 16> alive_pieces;
};
