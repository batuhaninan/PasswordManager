#include <iostream>

#include "Pages/login.h"
#include "Pages/mainpage.h"
#include "Pages/signup.h"
#include "initGUI.hpp"
#include <QApplication>

void initGUI(int argc, char *argv[]) {
  std::cout << "INIT GUI" << std::endl;
  QApplication a(argc, argv);
  login w;
  w.show();
  a.exec();
}
