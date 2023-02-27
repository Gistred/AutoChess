#include "Game.h"
#include "Player.h"




void Game::init(){
    
    white_player_ = Player();
    black_player_ = Player();


    Board* board = new Board();
    
    for(Piece* piece : white_player_.alive_pieces()){
        board->set_piece_at(piece, piece->position());
    }

    for(Piece* piece : black_player_.alive_pieces()){
        board->set_piece_at(piece, piece->position());
    }
    
}