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
  * @brief The program returns YES/NO whether a year is a leap year or not
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "The program returns YES/NO whether a year is a leap year or not" << std::endl;
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
    std::string year;
    std::cin >> year;

    if (std::stoi(year) % 4 == 0) {
      if (year[year.length() - 1] == '0' && year[year.length() - 2] == '0') {
        year = year.substr(0, year.length() - 2);
        if (std::stoi(year) % 4 == 0) {
          std::cout << "YES" << std::endl;
        } else {
          std::cout << "NO" << std::endl;
        }
      } else {
        std::cout << "YES" << std::endl;
      }
  
    } else {
      std::cout << "NO" << std::endl;
    }
    return 0;
  }
  return 345;
}

