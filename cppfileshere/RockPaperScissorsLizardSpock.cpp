#include <iostream>
#include <stdlib.h>

int main() {

  srand(time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;


  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";

  std::cout << "shoot!\n";

  std::cin >> user;

  switch (computer) {
    case 1 :
      std::cout << "Computer throws Rock \n";
      break;
    case 2 :
      std::cout << "Computer throws Paper \n";
      break;
    case 3 :
      std::cout << "Computer throws Scissors \n";
      break;
    case 4 :
      std::cout << "Computer throws Lizard \n";
      break;
    case 5 :
      std::cout << "Computer throws Spock \n";
      break;
    default :
      std::cout << "Something's gone wrong";
      break;
  }

  if (user == 1 && computer == 1) {
    std::cout << "Draw!\n";
  } else if (user == 1 && computer == 2) {
    std::cout << "You lose!\n";
  } else if (user == 1 && computer == 3) {
    std::cout << "You win!\n";
  } else if (user == 1 && computer == 4) {
    std::cout << "You win!\n";
  } else if (user == 1 && computer == 5) {
    std::cout << "You lose!\n";
  } else if (user == 2 && computer == 1) {
    std::cout << "You win!\n";
  } else if (user == 2 && computer == 2) {
    std::cout << "Draw!\n";
  } else if (user == 2 && computer == 3) {
    std::cout << "You lose!\n";
  } else if (user == 2 && computer == 4) {
    std::cout << "You lose!\n";
  } else if (user == 2 && computer == 5) {
    std::cout << "You win!\n";
  } else if (user == 3 && computer == 1) {
    std::cout << "You lose!\n";
  } else if (user == 3 && computer == 2) {
    std::cout << "You win!\n";
  } else if (user == 3 && computer == 3) {
    std::cout << "Draw!\n";
  } else if (user == 3 && computer == 4) {
    std::cout << "You win!\n";
  } else if (user == 3 && computer == 5) {
    std::cout << "You lose!\n";
  } else if (user == 4 && computer == 1) {
    std::cout << "You lose!\n";
  } else if (user == 4 && computer == 2) {
    std::cout << "You win!\n";
  } else if (user == 4 && computer == 3) {
    std::cout << "You lose!\n";
  } else if (user == 4 && computer == 4) {
    std::cout << "Draw!\n";
  } else if (user == 4 && computer == 5) {
    std::cout << "You win!\n";
  } else if (user == 5 && computer == 1) {
    std::cout << "You win!\n";
  } else if (user == 5 && computer == 2) {
    std::cout << "You lose!\n";
  } else if (user == 5 && computer == 3) {
    std::cout << "You win!\n";
  } else if (user == 5 && computer == 4) {
    std::cout << "You lose!\n";
  } else if (user == 5 && computer == 5) {
    std::cout << "Draw!\n";
  } else {
    std::cout << "Invalid input\n";
  }
}