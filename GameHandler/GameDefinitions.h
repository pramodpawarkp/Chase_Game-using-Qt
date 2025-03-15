#ifndef GAMEDEFINITIONS_H
#define GAMEDEFINITIONS_H


namespace Game{
enum class PieceType{
    King,
    Queen,
    Pawn,
    Bishop,
    Rook,
    Knight
};

enum class PieceColor{
    White,
    Black
};

struct Position{
    int row,column;
    Position(int r,int c)
    {
        row=r;
        column=c;
    }
    bool operator==(const Position& position)const{
        return row==position.row&&column==position.column;
    }
};
}

#endif // GAMEDEFINITIONS_H
