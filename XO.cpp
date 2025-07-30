#include <iostream>
#include <vector>

using namespace std;

class TicTacToe{
    private:
        vector<vector<char>> board;

        int currentPlayer;

    public:
        TicTacToe()
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