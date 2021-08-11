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
}


class Board
{
public:
    std::array<std::array<>, 8> board;

    Board()
    {

    }
};

class Chess {

};

int main(){
    return 0;
}