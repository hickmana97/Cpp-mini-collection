#include <iostream>

int main() {
  
  int year;

  std::cout << "Enter year: ";
  std::cin >> year;

  if (!((year / 1000) >= 1)) {
    std::cout << "Please enter a 4 digit year\n";
  } else if (year % 4 == 0) {
      if (year % 100 == 0 && year % 400 == !0) {
        std::cout << year << " is not a leap year.\n";
    } else if (year % 100 == 0 && year % 400 == 0){
      std::cout << year << " is a leap year.\n";
    }
    std::cout << year << " is a leap year.\n";
  } else {
    std::cout << year << " is not a leap year.\n";
  }
  
}
