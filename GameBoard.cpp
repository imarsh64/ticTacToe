//
// Created by imars on 7/27/2022.
//
#include "GameBoard.h"

GameBoard::GameBoard() {
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[j][i] = count + '1';
            count++;
        }
    }
}

void GameBoard::printBoard(){
    cout << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << " " << board[j][i];
            if(j < 2){
                cout << " " << char(179);
            }
        }
        cout << endl;
        if(i < 2) {
            cout << "------------" << endl;
        }
    }
    cout << endl << endl;
}

bool GameBoard::checkWin(){
    for(int i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            win = true;
        }
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            win = true;
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        win == true;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        win = true;
    }
    return win;
}

void GameBoard::playMove(int count){
    char move;
    int place;
    cout << "Enter location for next move: " << endl;
    cin >> place;
    if(count % 2 == 0){
        move = 'X';
    }
    else if(count % 2 == 1){
        move = 'O';
    }

    int itr = 1;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            if(itr == place){
                board[j][i] = move;
            }
            itr++;
        }
    }
}