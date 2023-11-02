/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P13623_chess_board.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 2 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program computes the total number of coins on its white squares
  * @bug There are no known bugs
  * 
  */

#include <iostream>

int main() {
  int fila{0}, columna{0}, total{0};
  std::cin >> fila >> columna;
  char chess_board;
  for (int i = 0; i < fila; ++i) {
    for (int j = 0; j < columna; ++j) {
      std::cin >> chess_board;
      if ((j + i) % 2 == 0) {
        total += chess_board - '0';
      }
    }
  }
  std::cout << total << std::endl;
}
