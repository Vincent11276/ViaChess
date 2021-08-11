#include <iostream>
#include <string>
#include <array>


enum Pieces
{
    BlackPawn,
    BlackKnight,
    BlackBishop,
    BlackRook,
    BlackQueen,
    BlackKing,

    WhitePawn,
    WhiteKnight,
    WhiteBishop,
    WhiteRook,
    WhiteQueen,
    WhiteKing,
};


class Board
{
public:
    static std::array<std::array<int, 8>, 8> board;

    Board()
    {

    }
};

std::array<std::array<int, 8>, 8> Board::board = {
    // Write the board here...or?
};

class Chess {
    
};

int main(){
    return 0;
}