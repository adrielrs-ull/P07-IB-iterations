#include <iostream>
int main(int argc, char* argv[]) {
   

 // Check the number of parameters
  std::cout << "No. of parameters passed: " << argc << std::endl;
  std::cout << "Parameters: " << std::endl;
  for(int i = 0; i < argc; ++i) {
    std::cout << i << " - " << argv[i]  << std::endl;
  }

  std::string program_name{argv[0]};  // Create a string object from the C-style (char* string)
  std::cout << "The program name is: " << program_name << std::endl;
  std::string parametro1{argv[1]};
  std::cout << "VALOR: " << parametro1 << std::endl;


  // How to convert a std::string into a number
  // https://www.geeksforgeeks.org/converting-strings-numbers-cc/

  return 0;
}
