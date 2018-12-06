#include <iostream>

int main() {

  int tip = 0;
  
  std::cout << "Enter tip amount: "; // standard see out
  std::cin >> tip; // where the variable is stored when user inputs tip amount
  std::cout << "You paid $" << tip << ".\n"; // chaining to use a string of words plus the variable see in provided by user
  std::cout << "Thank you for tipping!";
  
  return 0;
   
}
