
CFLAGS=-lstdc++ -pthread -std=c++17
INCLUDES=-Isrc/DB -Isrc/GUI 
FILES=main.cpp src/DB/initDB.cpp src/GUI/initGUI.cpp 
OUTPUT_FILE=PasswordManager
RM=rm -rf

run:
	g++ $(CFLAGS) $(INCLUDES) $(FILES) -o $(OUTPUT_FILE) && ./$(OUTPUT_FILE)

clear:
	$(RM) ./$(OUTPUT_FILE)
