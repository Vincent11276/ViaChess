#include <iostream>
#include <string>
#include <vector>


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
    static std::vector<std::vector<int>> board;
};

std::vector<std::vector<int>> Board::board = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {}
};

class Chess {

};

int main(){
    return 0;
}