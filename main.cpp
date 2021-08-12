#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
/*
    TO-DO: WRITE A VIABLE ALGORITHM FOR 'isMoveValid()',
           COMPLETE 'main()'
*/
/*
    Updates:
      - Added switch statement in 'Chess::isMoveValid();'
      - Deleted the 'color' enum | Comment: It's useless 
*/
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


class Vec2i
{
  public:
    int x;
    int y;

    Vec2i(Vec2i &val);
        
    Vec2i(int x_, int y_);
        

    Vec2i operator+(Vec2i &rhs);
   

    Vec2i operator-(Vec2i &rhs);
};


Vec2i::Vec2i(Vec2i &val)
    : x(val.x), y(val.y) { }


Vec2i::Vec2i(int x_, int y_) 
    : x(x_), y(y_) { }

Vec2i Vec2i::operator+(Vec2i &rhs) 
{
    return Vec2i(this->x + rhs.x, this->y + rhs.y);
}

Vec2i Vec2i::operator-(Vec2i &rhs)
{
    return Vec2i(this->x - rhs.x, this->y - rhs.y);
}

class Chess{
public:
    std::vector<std::vector<int>> board;
    
    void initBlack();
    
    void initWhite();

    void movePiece(Vec2i target, Vec2i desired);

    bool isMoveValid(Vec2i target, Vec2i desired);

    void dump();
};

void Chess::initBlack()
{
    this->board={
        {3 , 2 , 1 , 11, 10, 1 , 2 , 3 },
        {6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 },

        {12, 12, 12, 12, 12, 12, 12, 12},
        {12, 12, 12, 12, 12, 12, 12, 12},
        {12, 12, 12, 12, 12, 12, 12, 12},
        {12, 12, 12, 12, 12, 12, 12, 12},
        
        {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        {9 , 7 , 8 , 11, 10, 8 , 7 , 9 } 
         
    };
}

void Chess::initWhite()
{
    this->board={
        {9 , 7 , 8 , 11, 10, 8 , 7 , 9 }, 
        {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        
        {12, 12, 12, 12, 12, 12, 12, 12},
        {12, 12, 12, 12, 12, 12, 12, 12},
        {12, 12, 12, 12, 12, 12, 12, 12},
        {12, 12, 12, 12, 12, 12, 12, 12},
        
        {6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 },
        {3 , 2 , 1 , 10, 11, 1 , 2 , 3 }
    };
}


bool Chess::isMoveValid(Vec2i target, Vec2i desired)
{
  switch((*this).board.at(target.y).at(target.x)){
    case Pieces::BlackPawn:
      // Code
      break;
    case Pieces::BlackKnight:
      // Code
      break;
    case Pieces::BlackBishop:
      // Code
      break;
    case Pieces::BlackRook:
      // Code
      break;
    case Pieces::BlackQueen:
      // Code 
      break;
    case Pieces::BlackKing:
      // Code
      break;
    case Pieces::WhitePawn:
      // Code
      break;
    case Pieces::WhiteKnight:
      // Code
      break;
    case Pieces::WhiteBishop:
      // Code
      break;
    case Pieces::WhiteRook:
      // Code
      break;
    case Pieces::WhiteQueen:
      // Code 
      break;
    case Pieces::WhiteKing:
      // Code
      break;
    default:
      return false; // For obvious reasons
      // Default == Pieces::None
  }
  return false; // False as default return_value
}


void Chess::movePiece(Vec2i target, Vec2i desired){
    this->board.at(target.y).at(target.x)=
    this->board.at(desired.y).at(desired.x);
    this->board.at(target.y).at(target.x)=Pieces::None;
}

void Chess::dump()
{
    std::stringstream stream;
    
    // Just stick with these....
    stream << "   \u24B6   \u24B7   \u24B8   \u24B9   \u24BA   \u24BB   \u24BC   \u24BD"  << std::endl;
    //stream << "   \u0041   \u0042   \u0043   \u0044   \u0045   \u0046   \u0047   \u0047"  << std::endl;


    for (uint8_t col = 0; col < board.size(); col++) 
    {
        static std::string uNums[] = {"\u248F", "\u248E", "\u248C", "\u248B", "\u248A", "\u2489", "\u2489", "\u2488"};

        stream << uNums[col] << " ";

        for (auto piece: board[col])     
        {
            switch (piece)
            {
                case Pieces::BlackPawn:     stream << "[\u265F ]";  break;
                case Pieces::BlackKnight:   stream << "[\u265E ]";  break;
                case Pieces::BlackBishop:   stream << "[\u265D ]";  break;
                case Pieces::BlackRook:     stream << "[\u265B ]";  break;
                case Pieces::BlackQueen:    stream << "[\u265B ]";  break;
                case Pieces::BlackKing:     stream << "[\u265A ]";  break;
                
                case Pieces::WhitePawn:     stream << "[\u2659 ]";  break;
                case Pieces::WhiteKnight:   stream << "[\u2658 ]";  break;
                case Pieces::WhiteBishop:   stream << "[\u2657 ]";  break;
                case Pieces::WhiteRook:     stream << "[\u2656 ]";  break;
                case Pieces::WhiteQueen:    stream << "[\u2655 ]";  break;
                case Pieces::WhiteKing:     stream << "[\u2654 ]";  break;

                case Pieces::None:          stream << "[\u2800 ]"; break;
            }
        }
        stream << std::endl;
    }
    std::cout << stream.str() << std::endl;
}

int main()
{
     
}