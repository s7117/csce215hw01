#include "../inc/board.hpp"

TicTacToe::TicTacToe() {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      this->board[i][j] = ' ';
    }
  }
}

void TicTacToe::userplay() {
  int row = 0;
  int col = 0;
  while (true) {
    std::cout << "Enter the row!" << std::endl;
    std::cin >> row;
    std::cout << "Enter the col!" << std::endl;
    std::cin >> col;
    if (this->board[row][col] != ' ') {
      std::cout << "Play not valid!" << std::endl;
    }
    else break;
  }
  this->board[row][col] = 'X';
}

void TicTacToe::botplay() {
  int row = rand() % 3;
  int col = rand() % 3;
  while (board[row][col] != ' ') {
    row = rand() % 3;
    col = rand() % 3;
  }
  this->board[row][col] = 'O';
}

char check_win() {
  char winner = ' ';
  int row_count = 0;
  int col_count = 0;
  int diag_count = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      // Check rows and columns
      board[i][j];
      board[j][i];
    }
    // Check Diagonals
    if (board[i][i] == prev_diag) diag_count++;
  }
}

void TicTacToe::playgame() {
  int count = 0;
  while (count < 9) {
    to_string();
    userplay();
    count++;
  }
  std::cout << "Game Over!" << std::endl;
}

void TicTacToe::to_string() {
  std::cout << "-----" << std::endl;
  std::cout << "  012" << std::endl;
  std::cout << "-----" << std::endl;
  std::cout << "0|" << this->board[0][0] 
            << this->board[0][1]
            << this->board[0][2] << "\n"
            << "1|" << this->board[1][0] 
            << this->board[1][1]
            << this->board[1][2] << "\n"
            << "2|" << this->board[2][0] 
            << this->board[2][1]
            << this->board[2][2] << "\n";
  std::cout << "-----" << std::endl;
}
