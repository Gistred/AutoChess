#include "Pawn.h"
#include <vector>

std::vector<Position> Pawn::get_possible_moves(const Board& board)
{
    std::vector<Position> res;
    unsigned int coeff = color_ == Color::White ? 1 : -1;

    /*if never move*/
    if(!has_moved_)
    {
        Position start_foward = {position_.x, position_.y + 2 * coeff};
    }

    Position foward = {position_.x, position_.y + 1 * coeff};
    if (noir devant)
        the voice

    Position take_one = {position_.x + 1, position_.y + 1 * coeff};
    position take_two = {position_.x - 1, position_.y + 1 * coeff};
}
