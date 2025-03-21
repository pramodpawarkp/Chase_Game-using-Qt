QT       += core gui svg widgets svgwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GameHandler/ChessBoard.cpp \
    GameHandler/ChessPiece.cpp \
    GameHandler/PieceClasses/Bishop.cpp \
    GameHandler/PieceClasses/King.cpp \
    GameHandler/PieceClasses/Knight.cpp \
    GameHandler/PieceClasses/Pawn.cpp \
    GameHandler/PieceClasses/Queen.cpp \
    GameHandler/PieceClasses/Rook.cpp \
    UiHandler/MainWindow.cpp \
    main.cpp


HEADERS += \
    GameHandler/ChessBoard.h \
    GameHandler/ChessPiece.h \
    GameHandler/GameDefinitions.h \
    GameHandler/PieceClasses/Bishop.h \
    GameHandler/PieceClasses/King.h \
    GameHandler/PieceClasses/Knight.h \
    GameHandler/PieceClasses/Pawn.h \
    GameHandler/PieceClasses/Queen.h \
    GameHandler/PieceClasses/Rook.h \
    UiHandler/MainWindow.h


FORMS += \
    UiHandler/MainWindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc


