#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const string RED_COLOR = "\033[31m";
const string GREEN_COLOR = "\033[32m";
const string RESET_COLOR = "\033[0m";

int main()
{
  srand(time(NULL));

  string player1, player2;
  int player1roll, player2roll;

  cout << "Enter your name Player 1:\n";
  cin >> player1;
  cout << "Enter your name Player 2:\n";
  cin >> player2;

  player1roll = rand() % 20 + 1;
  player2roll = rand() % 20 + 1;

  cout << player1 << " rolled: " << player1roll << endl;
  cout << player2 << " rolled: " << player2roll << endl;

  if (player1roll == 1)
  {
    cout << RED_COLOR << "Critical Failure " << RESET_COLOR << player1 << "!\n";
  }
  else if (player1roll == 20)
  {
    cout << GREEN_COLOR << "Critical Success " << RESET_COLOR << player1 << "!\n";
  }

  if (player2roll == 1)
  {
    cout << RED_COLOR << "Critical Failure " << RESET_COLOR << player2 << "!\n";
  }
  else if (player2roll == 20)
  {
    cout << GREEN_COLOR << "Critical Success " << RESET_COLOR << player2 << "!\n";
  }

  if (player1roll > player2roll)
  {
    cout << player1 << " wins!\n";
  }
  else if (player2roll > player1roll)
  {
    cout << player2 << " wins!\n";
  }
  else
  {
    cout << "Players are evenly matched!\n";
  }

  return 0;
}