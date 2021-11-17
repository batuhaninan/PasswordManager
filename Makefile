run:
	g++ -lstdc++ -pthread -std=c++17 -Isrc/DB -Isrc/GUI main.cpp src/DB/initDB.cpp src/GUI/initGUI.cpp -o PasswordManager && ./PasswordManager

clear:
	rm -rf ./PasswordManager
