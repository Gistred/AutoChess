#include "Pawn.h"

#include "../Game.h"

std::vector<Position> Pawn::get_possible_moves(Board& board)
{
    std::vector<Position> possible_moves;

    
    unsigned int coeff = color_ == Color::White ? 1 : -1;
    
    Position foward = { position_.x, position_.y + 1 * coeff };
    if (foward.is_valid() && board.GetPieceAt(foward) == nullptr)
    {
        possible_moves.push_back(foward);

        if(has_moved_ == false)
        {
            Position start_foward_two = { position_.x, position_.y + 2 * coeff };
            if (start_foward_two.is_valid() && board.GetPieceAt(start_foward_two) == nullptr)
                possible_moves.push_back(start_foward_two);
        }
    }

    Position take_right = { position_.x + 1, position_.y + 1 * coeff };
    Piece* right = board.GetPieceAt(take_right);
    if (take_right.is_valid() && right != nullptr && right->get_color() != color_)
        possible_moves.push_back(take_right);

    Position take_left = { position_.x - 1, position_.y + 1 * coeff };
    Piece* left = board.GetPieceAt(take_left);
    if (take_left.is_valid() && left != nullptr && left->get_color() != color_)
        possible_moves.push_back(take_left);
}
