#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

const string BLUE_COLOR = "\033[34m";
const string RED_COLOR = "\033[31m";
const string GREEN_COLOR = "\033[32m";
const string YELLOW_COLOR = "\033[33m";
const string CYAN_COLOR = "\033[36m";
const string RESET_COLOR = "\033[0m";

int main()
{
  int choice;
  int totalPoints = 0;

  cout << CYAN_COLOR + "------------------------------\n" + RESET_COLOR;
  cout << YELLOW_COLOR + "Welcome to the Fishing Game!\n" + RESET_COLOR;
  cout << "1. " << GREEN_COLOR + "Start Fishing\n" + RESET_COLOR;
  cout << "2. " << RED_COLOR + "Exit Game\n" + RESET_COLOR;
  cout << YELLOW_COLOR + "Enter your choice: " + RESET_COLOR;
  cin >> choice;
  cout << CYAN_COLOR + "------------------------------\n" + RESET_COLOR;

  if (choice == 1)
  {
    do
    {
      int diceRoll = 1 + rand() % 6;

      int points = 0;
      string caughtItem = RED_COLOR + "nothing" + RESET_COLOR;

      if (diceRoll == 6)
      {
        caughtItem = CYAN_COLOR + "a blue marlin" + RESET_COLOR;
        points = 10;
      }
      else if (diceRoll == 3)
      {
        caughtItem = CYAN_COLOR + "a tire" + RESET_COLOR;
        points = 1;
      }
      else if (diceRoll == 2)
      {
        caughtItem = CYAN_COLOR + "a catfish" + RESET_COLOR;
        points = 3;
      }

      cout << "You caught " << caughtItem << "!";
      if (points > 0)
      {
        cout << " You got " << YELLOW_COLOR << points << " points!" + RESET_COLOR;
      }

      totalPoints += points;

      cout << "\nDo you want to continue playing? (1 for yes, 2 for no): ";
      cin >> choice;

    } while (choice == 1);
  }
  else if (choice == 2)
  {
    cout << RED_COLOR + "Exiting the game." + RESET_COLOR;
  }
  else
  {
    cout << RED_COLOR + "Invalid choice. Exiting the game." + RESET_COLOR;
  }

  cout << "\nTotal points: " << totalPoints << endl;
  if (totalPoints >= 30)
  {
    cout << GREEN_COLOR + "Congratulations! You won!\n" + RESET_COLOR;
  }
  else
  {
    cout << RED_COLOR + "Better luck next time.\n" + RESET_COLOR;
  }

  return 0;
}