/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Oct 24 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program converts a binary number into a decimal one, and returns the result
  * @bug There are no known bugs
  * 
  */


#include <iostream>

void PrintProgramPurpose() {
  std::cout << "The program converts a binary number into a decimal one and returns the result" << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int& kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "El número de parámetros introducidos es erróneo" << std::endl << std::endl;
    return false;
  }
  return true;
}

bool noContiene01(int num) {
  while (num > 0) {
    int digito = num % 10;
    if (digito != 0 && digito != 1) {
      return false;
    }
    num /= 10;
  }
  return true;
}

int main(int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 1)) {
    int numero;
    std::cin >> numero;
    PrintProgramPurpose();
    int decimal{0};

    if (noContiene01(numero)) { //por no le pasamos argumetnos cuando llamamos al programa
      while (numero != 0) {
        if (numero >= 10000000) {
          numero -= 10000000;
          decimal += 128;
        } else if (numero >= 1000000) {
          numero -= 1000000; 
          decimal += 64; 
        } else if (numero >= 100000) {
          numero -= 100000;
          decimal += 32; 
        } else if (numero >= 10000) {
          numero -= 10000;
          decimal += 16; 
         } else if (numero >= 1000) {
          numero -= 1000;
          decimal += 8;
        } else if (numero >= 100) {
          numero -= 100;
          decimal += 4;
        } else if (numero >= 10) {
          numero -= 10; 
          decimal += 2;
        } else if (numero >= 1) {
          numero -= 1;
          decimal += 1;
        }   
      }
      std::cout << decimal << std::endl;
    } else { 
      std::cout << "Wrong input" << std::endl; 
    }
    return 0;
  } 
  return 345;
}
