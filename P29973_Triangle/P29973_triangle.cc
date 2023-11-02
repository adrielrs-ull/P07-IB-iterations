/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P29973_tiangle.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program prints a “triangle of size n”
  * @bug There are no known bugs
  * 
  */


#include <iostream>

int main() {
  int numero;
  std::cin >> numero;
  std::string triangle = "*";
  for (int i{0}; i < numero; i++) {
    std::cout << triangle << std::endl;
    std::string cadena{"*"} ;
    triangle += cadena;
  }
  return 0;
}
