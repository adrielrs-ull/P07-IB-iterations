/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P59529_harmonic_numbers.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 2 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n 
  * @bug There are no known bugs
  * 
  */

#include <iostream>
#include <iomanip>

int main() {
  int num{0};
  std::cin >> num;
  double suma{0};
  for (int i = num; i > 0; i--) {
    suma += 1.0000 / i;
  }
  std::cout << std::fixed << std::setprecision(4) << suma << std::endl;
  return 0;
}
