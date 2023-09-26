#include <iostream>

int main() {
  float pesos;
  float reais;
  float soles;
  float dollars;

  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  /*
  Conversion Rates:
    Pesos -> USD = 0.00026
    Reais -> USD = 0.21
    Soles -> USD = 0.27
  */

  // Calculating how much our currencies are worth in dollars
  dollars = (pesos * 0.00026) + (reais * 0.21) + (soles * 0.27);

  std::cout << "US Dollars = $" << dollars << "\n";

  
}