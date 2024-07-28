
#include <iostream>
using namespace std;
bool check_win(char board[], char player) {
  // Check rows for a win
  for (int i = 0; i < 3; i++) {
    if (board[i] == player && board[i + 3] == player && board[i + 6] == player) {
      return true;
    }
  }
  // Check columns for a win
  for (int i = 0; i < 3; i++) {
    if (board[i] == player && board[i + 3] == player && board[i + 6] == player) {
      return true;
    }
  }
  // Check diagonals for a win
if (board[0] == player && board[4] == player && board[8] == player) {
    return
true;
  }
  if (board[2] == player && board[4] == player && board[6] == player) {
    return
true;
  }
  return
false;
}
bool check_draw(char board[]) {
  for (int i = 0; i < 9; i++) {
    if (board[i] == ' ') {
      return false;
    }
  }
  return true;
}
void print_board(char board[])
{
  cout << "-------------" << endl;
  cout << "|" << board[0] << " |" << board[1] << " |" << board[2] << "|" << endl;
  cout << "-------------" << endl;
  cout << "|" << board[3] << " |" << board[4] << " |" << board[5] << "|" << endl;
  cout << "-------------" << endl;
  cout << "|" << board[6] << " |" << board[7] << " |" << board[8] << "|" << endl;
  cout << "-------------" << endl;
}
int main() {
  char board[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  char player = 'X';
  while (true) {
    print_board(board);
    cout << "Player " << player << ", enter your move (1-9): ";
    int move;
    cin >> move;
    move--;
   if (move < 0 || move > 8 || board[move] != ' ') {
      cout << "Invalid move. Please try again." << endl;
      continue;
    }
    board[move] = player;
    if (check_win(board, player)) {
      print_board(board);
      cout << "Player " << player << " wins!" << endl;
      break;
    }
    if (check_draw(board)) {
      print_board(board);
      cout << "The game is a draw." << endl;
      break;
    }
    player = player == 'X' ? 'O' : 'X';
  }
  return 0;
}