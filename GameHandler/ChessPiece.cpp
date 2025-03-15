#include "ChessPiece.h"

ChessPiece::ChessPiece(Game::PieceType &Type, Game::PieceColor &clr, Game::Position &ptn)
    :pieceType(Type),
    color(clr),
    position(ptn)
{

}
