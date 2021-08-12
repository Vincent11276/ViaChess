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

    None,
};


enum Color
{
    Black,
    White
};

class Board
{
public:
    std::vector<std::vector<int>> board;

    void initBoard(Color perspective); 
};


void Board::initBoard(Color perspective)
{
    if (perspective == Color::Black)
    {
        board =
        {

            {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
            {12, 12, 12, 12, 12, 12, 12, 12},
            {12, 12, 12, 12, 12, 12, 12, 12},
            {12, 12, 12, 12, 12, 12, 12, 12},
            {12, 12, 12, 12, 12, 12, 12, 12},

        };
        

    }
}


int main(){
    return 0;
}