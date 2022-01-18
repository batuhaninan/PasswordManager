#include <iostream>

#include "DB.hpp"
#include "GUI.hpp"


int main() {
	
	std::cout << "INIT APP" << std::endl;
	
	initDB();
	initGUI();


	return 0;
}
