#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include "GameHandler/ChessPiece.h"

class ChessBoard
{
public:
    ChessBoard();
private:
    ChessPiece board[8][8];
};

#endif // CHESSBOARD_H
