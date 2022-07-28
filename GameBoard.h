//
// Created by imars on 7/27/2022.
//

#ifndef INC_2048_GAMEBOARD_H
#define INC_2048_GAMEBOARD_H

#include <iostream>


using namespace std;
struct GameBoard{
    bool win = false;
    char board[3][3];

    GameBoard();
    void playMove(int);
    bool checkWin();
    void printBoard();
};

#endif //INC_2048_GAMEBOARD_H
