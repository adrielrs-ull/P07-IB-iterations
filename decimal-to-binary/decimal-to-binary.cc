/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Oct 9 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program converts a decimal number into a binary one, and returns the result
  * @bug There are no known bugs
  * 
  */


#include <iostream>

void PrintProgramPurpose() {
  std::cout << "The program converts a decimal number into a binary one and returns the result" << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int& kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "El número de parámetros introducidos es erróneo" << std::endl << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (CheckCorrectParameters(argc, argv, 1)) {
    int numero;
    int binario{0};
    std::cin >> numero;
    while (numero != 0) {
      if (numero >= 128) {
        numero -= 128;
        binario += 10000000;
      } else if (numero >= 64) {
          numero -= 64;
          binario += 1000000;
      } else if (numero >= 32) {
          numero -= 32;
          binario += 100000;
      } else if (numero >= 16) { 
          numero -= 16;
          binario += 10000;
       } else if (numero >= 8) { 
          numero -= 8;
          binario += 1000;
      } else if (numero >= 4) { 
          numero -= 4;
          binario += 100;
      } else if (numero >= 2) { 
          numero -= 2;
          binario += 10;
      } else if (numero >= 1) { 
          numero -= 1;
          binario += 1;
      }
    }
    std::cout << binario << std::endl;
    return 0;
  }
  return 345;
}
