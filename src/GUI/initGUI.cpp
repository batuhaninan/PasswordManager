#include <iostream>

#include "GUI.hpp"
#include "login.h"
#include "signup.h"
#include "mainpage.h"
#include <QApplication>

void initGUI()
{
	std::cout << "INIT GUI" << std::endl;
	QApplication a(argc, argv);
	login w;
	w.show();
	return a.exec();
}
