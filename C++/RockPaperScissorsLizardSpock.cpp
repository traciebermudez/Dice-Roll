#include <iostream>
#include <stdlib.h>
#include <ctime>

#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define YELLOW "\033[33m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main()
{
  srand(time(NULL));
  char playAgain;

  do
  {
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << CYAN << "=================================" << RESET << std::endl;
    std::cout << CYAN "Rock Paper Scissors Lizard Spock!" << RESET << std::endl;
    std::cout << CYAN << "=================================" << RESET << std::endl;

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizard\n";
    std::cout << "5) Spock\n";

    std::cout << GREEN << "Shoot!: " << RESET << std::endl;
    std::cin >> user;

    if (user == 1)
      std::cout << MAGENTA << "You chose: " << RESET << "Rock\n";
    else if (user == 2)
      std::cout << MAGENTA << "You chose: " << RESET << "Paper\n";
    else if (user == 3)
      std::cout << MAGENTA << "You chose: " << RESET << "Scissors\n";
    else if (user == 4)
      std::cout << MAGENTA << "You chose: " << RESET << "Lizard\n";
    else
      std::cout << MAGENTA << "You chose: " << RESET << "Spock\n";

    if (computer == 1)
      std::cout << YELLOW << "CPU chose: " << RESET << "Rock\n";
    else if (computer == 2)
      std::cout << YELLOW << "CPU chose: " << RESET << "Paper\n";
    else if (computer == 3)
      std::cout << YELLOW << "CPU chose: " << RESET << "Scissors\n";
    else if (computer == 4)
      std::cout << YELLOW << "CPU chose: " << RESET << "Lizard\n";
    else
      std::cout << YELLOW << "CPU chose: " << RESET << "Spock\n";

    if (user == computer)
    {
      std::cout << "It's a tie!\n";
    }

    else if ((user == 1 && (computer == 3 || computer == 4)) ||
             (user == 2 && (computer == 1 || computer == 5)) ||
             (user == 3 && (computer == 2 || computer == 4)) ||
             (user == 4 && (computer == 5 || computer == 2)) ||
             (user == 5 && (computer == 3 || computer == 1)))

    {
      std::cout << GREEN << "You won! Woohoo!\n"
                << RESET;
    }
    else
    {
      std::cout << RED << "You lost! Booooo!\n"
                << RESET;
    }

    std::cout << "Do you want to play again? (y/n): ";
    std::cin >> playAgain;
  } while (playAgain == 'y' || playAgain == 'Y');

  std::cout << "Goodbye!\n";

  return 0;
}
