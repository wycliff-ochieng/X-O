#include <iostream>
#include <vector>
#include <board.h>

using namespace std;

class TicTacToeBoard{
    private:
        vector<vector<char>> board;

        int currentPlayer;

    public:
        TicTacToeBoard()
        {
            board = vector<vector<char>>(3,vector<char>(3, ' '));
        }

        void printBoard()
        {
            for (int i = 0; i <3; ++i){
                for(int j = 0; j <3, ++j){
                    cout << board[i][j];
                    if (j < 2) {
                        cout << " | ";
                    }
                }
            }
        }
}