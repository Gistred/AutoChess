#pragma once

constexpr int BOARD_SIZE = 8;

enum class Color {
    White,
    Black
};

enum class GameState {
    Started,
    InProgress,
    Finished
};

enum class PieceType {
    Pawn,
    Bishop,
    Knight,
    Rock,
    Queen,
    King
};

struct Position
{
    unsigned int x;
    unsigned int y;

    bool is_valid() const
    {
        return x < BOARD_SIZE && y < BOARD_SIZE;
    }
};

bool operator==(const Position& lhs, const Position& rhs)
{
    return lhs.x == rhs.x && lhs.y == rhs.y;
}
