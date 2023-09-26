#include <iostream>

int main() {
  // Dog's age in years
  int dog_age = 9;

  // First 2 years count as 21 human years
  int early_years = 21;
  // Each following year counts as 4 human years
  int later_years = (dog_age - 2) * 4;

  // Dog's age put into human years
  int human_years = early_years + later_years;

  std::cout << "My name is Marley! Ruff ruff, I am " << human_years << " years old in human years.\n";

}