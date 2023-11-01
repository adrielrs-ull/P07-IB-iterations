/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file serie_Fibonacci.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Oct 9 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program returns the n first numbers of the Fibonacci series
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <vector>
void PrintProgramPurpose() {
  std::cout << "The program returns the n first numbers of the Fibonacci series" << std::endl;
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
    int n_terminos, fibo1{0}, fibo2{1}, fibo3{0};
    std::cin >> n_terminos;
    for (int i{0}; i < n_terminos - 1; i++) {
      if (fibo3 == 1) {
        std::cout << " " << fibo3 << " " << fibo3;
      } else {
        std::cout << " " << fibo3;
      }
      fibo3 = fibo1 + fibo2;
      fibo1 = fibo2;
      fibo2 = fibo3;
    }
    std::cout << std::endl;
    return 0;
  } 
  return 345;
}
