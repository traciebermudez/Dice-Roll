#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
  // Introduction
  std::cout << "~*~*~*~~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << std::endl;
  std::cout << "\n\tPaw Prints: A Quest for a Furrever Home" << std::endl;
  std::cout << "\n~*~*~*~~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << std::endl;
  std::cout << "\n\t\tStoryline & Rules:" << std::endl;
  std::cout << "\n+  You wake up in a city filled with adventure!                          +" << std::endl;
  std::cout << "+  You find yourself in a maze of four mysterious alleyways.             +" << std::endl;
  std::cout << "+  Your goal is to overcome conflicts and earn paw prints.               +" << std::endl;
  std::cout << "+  You get two dice rolls. The first dice roll determines your fate.     +" << std::endl;
  std::cout << "+  You must roll over 50 or you will end up in a sticky situation.       +" << std::endl;
  std::cout << "+  For the second dice roll if you score over 50, you receive            +" << std::endl;
  std::cout << "+  5 paw prints. If you score under 50 you will receive zero paw prints. +" << std::endl;
  std::cout << "+  After you collect a total of 15 paw prints,                           +" << std::endl;
  std::cout << "+  you find your furrever home!                                          +" << std::endl;
  std::cout << "+  If you run into too many conflicts and don’t                          +" << std::endl;
  std::cout << "+  collect enough paw prints, you end up as a stray!                     +" << std::endl;
  std::cout << "+  You get only 5 attempts or it's game over. Goodluck!                  +" << std::endl;
  std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";

  // Character selection
  char playAgain = 'y';
  bool wiseOldCatLady = false;

  while (playAgain == 'y' || playAgain == 'Y')
  {
    bool validCharacterChoice = false;
    std::string characterChoice;
    while (!validCharacterChoice)
    {
      std::cout << "\nChoose your character:\n";
      std::cout << "* French Bulldog\n";
      std::cout << "* Scottish Fold Kitty\n";
      std::cout << "* Bearded Dragon\n";
      std::cout << std::endl;
      std::getline(std::cin, characterChoice);

      if (characterChoice == "French Bulldog" || characterChoice == "french bulldog")
      {
        std::cout << "You chose a French Bulldog!";
        validCharacterChoice = true;
      }
      else if (characterChoice == "Scottish Fold Kitty" || characterChoice == "scottish fold kitty")
      {
        std::cout << "You chose a Scottish Fold Kitty!";
        validCharacterChoice = true;
      }
      else if (characterChoice == "Bearded Dragon" || characterChoice == "bearded dragon")
      {
        std::cout << "You chose a Bearded Dragon!";
        validCharacterChoice = true;
      }
      else
      {
        std::cout << "Invalid choice! Choose a valid character!";
        std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
      }
    }
    std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";

    std::string alleywayChoice;
    bool validAlleywayChoice = false;
    int pawPrints = 0;
    srand(time(0));
    int maxAttempts = 5;
    int attempts = 0;

    // Alleyway Choices
    while (!validAlleywayChoice && pawPrints < 15 && attempts < maxAttempts)
    {
      std::cout << "\n\nWhich alleyway do you choose?\n";
      std::cout << "* Straight\n";
      std::cout << "* Hidden\n";
      std::cout << "* Left\n";
      std::cout << "* Right\n";
      std::cout << std::endl;
      std::getline(std::cin, alleywayChoice);

      // Alleyway choice straight
      if (alleywayChoice == "Straight" || alleywayChoice == "straight")
      {
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        std::cout << "\n\nYou walk forward into the straight alleyway ahead,\n";
        std::cout << "where you stumble upon a rat hunt opportunity.\n";
        std::cout << "Beware there are wild bearded dragons waiting for you.\n";
        std::cout << "Do you proceed with the hunt or find another path?\n";

        int diceConflict = rand() % 100 + 1;
        int dicePawPrints = rand() % 100 + 1;

        std::cout << "\nYour fate dice roll: " << diceConflict << std::endl;
        std::cout << "Paw prints dice roll: " << dicePawPrints << std::endl;

        if (diceConflict < 50)
        {
          std::cout << "\nYou chose to take a different path and not pursue the rat hunt.\n";
          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          {
            std::cout << "You didn't receive any paw prints!\n";
          }
        }
        else if (diceConflict >= 50)
        {
          std::cout << "\nYou’ve encountered a wild pack of bearded dragons!\n";
          std::cout << "Luckily they’re friendly and will help you on your rat hunt!\n";

          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          {
            std::cout << "You didn't receive any paw prints!\n";
          }
        }
        std::cout << "\nTotal Paw Prints: " << pawPrints << std::endl;
        validAlleywayChoice = false;
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
      }

      // Alleyway choice hidden
      if (alleywayChoice == "Hidden" || alleywayChoice == "hidden")
      {
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        std::cout << "\n\nYou notice a mysterious hidden alleyway.\n";
        std::cout << "Inside, you find a cozy cardboard box that offers shelter\n";
        std::cout << "and safety. While resting, you face an unexpected challenge,\n";
        std::cout << "a human wants to throw away your box!\n";
        std::cout << "Do you fight back or leave the box behind?\n";

        int diceConflict = rand() % 100 + 1;
        int dicePawPrints = rand() % 100 + 1;

        std::cout << "\nYour fate dice roll: " << diceConflict << std::endl;
        std::cout << "Paw prints dice roll: " << dicePawPrints << std::endl;

        if (diceConflict < 50)
        {
          std::cout << "\nYou fought back! The mean human called the pound!";
          std::cout << "\nMake a run for it!\n";

          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          { // Boost
            wiseOldCatLady = true;
            std::cout << "\nYou have found a wise old cat lady who shares her wisdom with you.\n";
            std::cout << "She gifts you 5 paw prints to help you continue your journey.\n";
            std::cout << "\n+5 paw prints\n";
            pawPrints += 5;
          }
        }
        else if (diceConflict >= 50)
        {
          std::cout << "\nYou ran away from the mean human!";
          std::cout << "\nLeaving your box behind and never looking back.\n";

          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          {
            std::cout << "You didn't receive any paw prints!\n";
          }
        }
        std::cout << "\nTotal Paw Prints: " << pawPrints << std::endl;
        validAlleywayChoice = false;
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
      }

      // Alleyway choice left
      if (alleywayChoice == "Left" || alleywayChoice == "left")
      {
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        std::cout << "\n\nYou venture into a dark alleyway,\n";
        std::cout << "where you discover a hidden stash of food.\n";
        std::cout << "As you enjoy your meal, a fierce cat is trying to steal your feast.\n";
        std::cout << "Do you choose to flee or will you stand your ground and defend your food?\n";

        int diceConflict = rand() % 100 + 1;
        int dicePawPrints = rand() % 100 + 1;

        std::cout << "\nYour fate dice roll: " << diceConflict << std::endl;
        std::cout << "Paw prints dice roll: " << dicePawPrints << std::endl;

        if (diceConflict < 50)
        {
          std::cout << "\nYou fled from your feast! Now you will starve!\n";
          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          {
            std::cout << "You didn't receive any paw prints!\n";
          }
        }
        else if (diceConflict >= 50)
        {
          std::cout << "\nYou won your food in a vicious cat fight! Congratulations you won't starve!\n";
          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          {
            std::cout << "You didn't receive any paw prints!\n";
          }
        }
        std::cout << "\nTotal Paw Prints: " << pawPrints << std::endl;
        validAlleywayChoice = false;
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
      }

      // Alleyyway choice right
      else if (alleywayChoice == "Right" || alleywayChoice == "right")
      {
        std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        std::cout << "\n\nYou decide to explore the right alleyway, which leads you\n";
        std::cout << "to a secluded spot with a source of water. While quenching your\n";
        std::cout << "thirst, you encounter a dangerous dog fight.\n";
        std::cout << "Will you confront the dogs or find an alternative route?\n";

        int diceConflict = rand() % 100 + 1;
        int dicePawPrints = rand() % 100 + 1;

        std::cout << "\nYour fate dice roll: " << diceConflict << std::endl;
        std::cout << "Paw prints dice roll: " << dicePawPrints << std::endl;

        if (diceConflict < 50)
        {
          std::cout << std::endl;
          std::cout << "                   ! ! ! ! ! ! ! !";
          std::cout << "\n         Oh no!! You’ve been attacked by dogs!\n";
          std::cout << "     Unfortunately, you got hurt and can no longer\n";
          std::cout << "               continue your adventure.\n";
          std::cout << "                   ! ! ! ! ! ! ! !";
          std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

          validAlleywayChoice = true;
        }
        else if (diceConflict >= 50)
        {
          std::cout << "\nYou found an alternative route and didn't get attacked!\n";
          if (dicePawPrints >= 50)
          {
            std::cout << "You received 5 paw prints!\n";
            pawPrints += 5;
          }
          else
          {
            std::cout << "You didn't receive any paw prints!\n";
          }
          std::cout << "\nTotal Paw Prints: " << pawPrints << std::endl;
          validAlleywayChoice = false;
          std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        }
      }
      attempts++;
    }
    if (pawPrints >= 15)
    {
      std::cout << "\n\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
      std::cout << "\n                  Total Paw Prints: " << pawPrints << std::endl;
      std::cout << "\n                   Congratulations!\n";
      std::cout << "      You’ve collected 15 paw prints and impressed\n";
      std::cout << "a kind-hearted human who takes you along as their companion.\n";
      std::cout << "         You found your furrever home, filled with\n";
      std::cout << "              love, care, and endless food!\n";
      std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
    }
    else
    {
      std::cout << "\n\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
      std::cout << "\n          You did not collect enough paw prints\n";
      std::cout << "   and ran into too many conflicts, you end up as a stray,\n";
      std::cout << "      always wandering the alleys in search of a home.\n";
      std::cout << "                        Game Over.\n";
      std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
    }

    // Play again
    std::cout << "Do you want to play again? (y/n): ";
    std::cin >> playAgain;
    std::cin.ignore();
  }
  std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~~*~\n";
  std::cout << "Thank you for playing Paw Prints: A Quest for a Furrever Home!\n";
  std::cout << "                       Goodbye!";
  std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~~*~\n";
  return 0;
}
