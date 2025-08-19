#include <iostream>
#include <vector>


class TicToeBoard{
    private:
        std::vector<std::vector<char>> grid;
        

    explicit TicToeBoard()
        : grid(3, std::vector<char>(3,' ')) //= std::vector<std::vector<char>grid>
    {
        //empty constructor body
    }

    void displayBoard()
    {
        //prints current state of the board
    };

    bool isCellEmpty(int row, int col)
    {
        //check if cell is empty
    };
    void placeSymbol(int row,int col, char symbol)
    {
        //check if cell is empty the places symbol
    };
    bool isFull()
    {
        //is the grid full?
    }; 
};