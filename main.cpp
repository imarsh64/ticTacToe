#include <iostream>
#include "GameBoard.h"

using namespace std;

int main() {
    cout << "TIC TAC TOE" << endl;
    cout << "Enter the location (1-9) where you want to make your move!" << endl;
    cout << "X goes first" << endl << endl;

    GameBoard g;
    g.printBoard();

    int count = 0;
    while(!g.win && count < 9){
        g.playMove(count);
        g.printBoard();
        g.checkWin();
        count++;
    }
    if(count >= 9){
        cout << "Tied Game" << endl;
    }
    else if(count % 2 == 0){
        cout << "O wins" << endl;
    }
    else{
        cout << "X wins" << endl;
    }

    cout << "End" << endl;
    return 0;
}
