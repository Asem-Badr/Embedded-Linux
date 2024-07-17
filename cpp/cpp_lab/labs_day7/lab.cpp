#include <iostream>
#include <cstdlib>

class Battleship
{
private:
    bool board[5][5];
    int guesses = 0;
    int maxGuesses;
    int locationX, locationY;

public:
    Battleship(int maxGuesses)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                board[i][j] = false;
            }
        }
        this->maxGuesses = maxGuesses;
        locationX = rand() % 5;
        locationY = rand() % 5;
        board[locationX][locationY] = true;
    }
    bool guess(int x, int y)
    {
        guesses++;
        if (x == locationX && y == locationY)
        {
            return true;
        }
        sameRow(x);
        sameColumn(y);
        return false;
    }
    bool gameOver()
    {
        if (guesses >= maxGuesses)
        {
            return true;
        }
        return false;
    }
    void debugBoard()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    void sameRow(int x)
    {
        if (x == locationX)
        {
            std::cout << "same row" << std::endl;
        }
    }
    void sameColumn(int y)
    {
        if (y == locationY)
        {
            std::cout << "same column" << std::endl;
        }
    }
    int getGuesses()
    {
        return guesses;
    }
};

int main()
{
    Battleship game(5);
    int x, y;
    game.debugBoard();
    while (!game.gameOver())
    {
        std::cout << "Enter x and y: ";
        std::cin >> x >> y;
        if (game.guess(x, y))
        {
            std::cout << "You won!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Try again!" << std::endl;
        }
    }
    std::cout << "Game over!" << std::endl;

    return 0;
}