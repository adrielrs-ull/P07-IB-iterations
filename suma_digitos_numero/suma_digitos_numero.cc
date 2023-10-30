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
  * @brief The program adds the digits of the read number and returns the result
  * @bug There are no known bugs
  * 
  */


#include <iostream> 
#include <string>
void PrintProgramPurpose() {
  std::cout << "The program adds the digits of the read number and returns the result" << std::endl;
}

bool CheckCorrectParameters(const int argc, char* argv[], const int& kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "El número de parámetros introducidos es erróneo" << std::endl << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose;
  if (CheckCorrectParameters(argc, argv, 1)) {
    std::string numero;
    std::cin >> numero;
    int suma{0};
    for (char& caracter : numero) {
      suma += (caracter - '0'); 
    }
    std::cout << suma << std::endl;
    return 0;
  }
  return 345;
}
