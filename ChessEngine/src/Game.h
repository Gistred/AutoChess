#pragma once

#include "Player.h"
#include "Details.h"
#include "Piece.h"

#include <array>
#include <iostream>

class Board
{
public:
    Piece* GetPieceAt(Position pos)
    {
        if (pos.is_valid() == false)
            return nullptr;
        return pieces_[pos.x][pos.y];
    }

    void BoarDisplay()
    {
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){

                if(this->pieces_[i][j] == nullptr){
                    std::cout << " ";
                }
                else{
                    PieceType type = this->pieces_[i][j]->piece_type();
                    Color color = this->pieces_[i][j]->get_color();
                    
                    if(color == Color::White){
                        switch (type)
                        {
                        case PieceType::Pawn : std::cout << "P"; break;
                        case PieceType::Bishop : std::cout << "B"; break;
                        case PieceType::Knight : std::cout << "N"; break;
                        case PieceType::Rock : std::cout << "R"; break;
                        case PieceType::Queen : std::cout << "Q"; break;
                        case PieceType::King : std::cout << "K"; break;
                        }
                    }

                    if(color == Color::Black){
                        switch (type)
                        {
                        case PieceType::Pawn : std::cout << "p"; break;
                        case PieceType::Bishop : std::cout << "b"; break;
                        case PieceType::Knight : std::cout << "n"; break;
                        case PieceType::Rock : std::cout << "r"; break;
                        case PieceType::Queen : std::cout << "q"; break;
                        case PieceType::King : std::cout << "k"; break;
                        }
                    }
                };

            }
        }
    };

    std::array<std::array<Piece*, 8>, 8> pieces(){
        return pieces_;
    }

    void set_piece_at(Piece* piece, Position position){
        pieces_[position.x][position.x] = piece;
    }

private:
    std::array<std::array<Piece*, 8>, 8> pieces_;
};

class Game 
{
public:
    Player& white_player() { return white_player_; }
    const Player& white_player() const  { return white_player_; }
    Player& black_player() { return black_player_; }
    const Player& black_player() const  { return black_player_; }
    GameState game_state() const { return game_state_; }
    Color turn() const { return turn_; }
    Board board() {return board_;}
    void init();
    void set_board(Board board){
        board_ = board;
    }

private:
    Player white_player_;
    Player black_player_;
    Board board_;
    GameState game_state_;
    Color turn_;
};
