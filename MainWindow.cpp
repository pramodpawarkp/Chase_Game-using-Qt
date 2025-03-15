#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QGraphicsRectItem>
#include<QGraphicsSvgItem>
#include <QSvgRenderer>

#include <QBrush>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create QGraphicsScene
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    drawBoard();  // Draw the chessboard
    addPieces();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawBoard()
{
    int tileSize = 60;  // Each square size
    int boardSize = 8;  // 8x8 chessboard

    for (int row = 0; row < boardSize; ++row) {
        for (int col = 0; col < boardSize; ++col) {
            // Alternate colors
            QColor color = ((row + col) % 2 == 0) ? Qt::white : Qt::green;

            // Create a rectangle for the chessboard tile
            QGraphicsRectItem *square = new QGraphicsRectItem(col * tileSize, row * tileSize, tileSize, tileSize);
            square->setBrush(QBrush(color));

            // Add to scene
            scene->addItem(square);
        }
    }

    // Set scene size
    scene->setSceneRect(0, 0, boardSize * tileSize, boardSize * tileSize);
}


void MainWindow::addPieces() {
    int tileSize = 60;

    // Define paths for each piece (adjust based on your filenames)
    QString piecePaths[8] = {":/images/rook.svg", ":/images/knight.svg", ":/images/bishop.svg",
                             ":/images/queen.svg", ":/images/king.svg", ":/images/bishop.svg",
                             ":/images/knight.svg", ":/images/rook.svg"};

    // Add Pawns
    for (int col = 0; col < 8; ++col) {
        // Black Pawn
        QGraphicsSvgItem *blackPawn = new QGraphin


































                csSvgItem("/Pieces/Images/PawnBlack.svg");
        blackPawn->setPos(col * tileSize, 1 * tileSize);
        scene->addItem(blackPawn);

        // White Pawn
        QGraphicsSvgItem *whitePawn = new QGraphicsSvgItem(":/Images/Images/PawnWhite.svg");
        whitePawn->setPos(col * tileSize, 6 * tileSize);
        scene->addItem(whitePawn);
    }

    // Add Other Pieces
    for (int col = 0; col < 8; ++col) {
        // Black Pieces
        QGraphicsSvgItem *blackPiece = new QGraphicsSvgItem(piecePaths[col]);
        blackPiece->setPos(col * tileSize, 0 * tileSize);
        scene->addItem(blackPiece);

        // White Pieces
        QGraphicsSvgItem *whitePiece = new QGraphicsSvgItem(piecePaths[col]);
        whitePiece->setPos(col * tileSize, 7 * tileSize);
        scene->addItem(whitePiece);
    }
}
