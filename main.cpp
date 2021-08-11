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

    Board()
    {

    }
};

std::vector<std::vector<int>> Board::board = {
    // Write the board here...or?
};

class Chess {

};

int main(){
    return 0;
}