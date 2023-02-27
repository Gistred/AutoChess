#include "Player.h"
#include "Pieces/Pawn.h"

std::vector<Piece*>  Player::init_pieces(){

    std::vector<Piece*> pieces;
    
    if(color() == Color::White)
    {
        pieces.push_back(new Pawn({0,1}, Color::White));
        pieces.push_back(new Pawn({1,1}, Color::White));
        pieces.push_back(new Pawn({2,1}, Color::White));
        pieces.push_back(new Pawn({3,1}, Color::White));
        pieces.push_back(new Pawn({4,1}, Color::White));
        pieces.push_back(new Pawn({5,1}, Color::White));
        pieces.push_back(new Pawn({6,1}, Color::White));
        pieces.push_back(new Pawn({7,1}, Color::White));

    }

    if(color() == Color::Black)
    {
        pieces.push_back(new Pawn({0,6}, Color::White));
        pieces.push_back(new Pawn({1,6}, Color::White));
        pieces.push_back(new Pawn({2,6}, Color::White));
        pieces.push_back(new Pawn({3,6}, Color::White));
        pieces.push_back(new Pawn({4,6}, Color::White));
        pieces.push_back(new Pawn({5,6}, Color::White));
        pieces.push_back(new Pawn({6,6}, Color::White));
        pieces.push_back(new Pawn({7,6}, Color::White));

    }

    

    set_alive_pieces(pieces);
    
};