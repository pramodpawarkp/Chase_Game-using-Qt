#ifndef CHESSPIECE_H
#define CHESSPIECE_H
#include "GameHandler/GameDefinitions.h"


class ChessPiece
{
public:
    ChessPiece(Game::PieceType&,Game::PieceColor&,Game::Position&);
private:
    Game::PieceType pieceType;
    Game::PieceColor color;
    Game::Position position;

};

#endif // CHESSPIECE_H
