#ifndef BOARD_H
#define BOARD_H

#include <iostream>

class TicTacToe {
  private:
    char board[3][3];
    void userplay();
    void botplay();
  public:
    TicTacToe();
    void playgame();
    void to_string();
};

#endif
