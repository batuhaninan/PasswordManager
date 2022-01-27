#include "src/DB/initDB.hpp"
#include "src/GUI/initGUI.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Hello, world. " << std::endl;

  initDB();
  initGUI(argc, argv);

  return 0;
}
