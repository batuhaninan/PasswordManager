# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/batuhaninan/Documents/Projects/PasswordManager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/batuhaninan/Documents/Projects/PasswordManager/build

# Include any dependencies generated for this target.
include CMakeFiles/PasswordManager.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PasswordManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PasswordManager.dir/flags.make

CMakeFiles/PasswordManager.dir/main.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PasswordManager.dir/main.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/main.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/main.cpp

CMakeFiles/PasswordManager.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/main.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/main.cpp > CMakeFiles/PasswordManager.dir/main.cpp.i

CMakeFiles/PasswordManager.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/main.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/main.cpp -o CMakeFiles/PasswordManager.dir/main.cpp.s

CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.o: ../src/DB/Database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/DB/Database.cpp

CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/DB/Database.cpp > CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.i

CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/DB/Database.cpp -o CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.s

CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.o: ../src/DB/initDB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/DB/initDB.cpp

CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/DB/initDB.cpp > CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.i

CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/DB/initDB.cpp -o CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.s

CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.o: ../src/GUI/initGUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/initGUI.cpp

CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/initGUI.cpp > CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.i

CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/initGUI.cpp -o CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.s

CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.o: ../src/GUI/Pages/editpage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/editpage.cpp

CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/editpage.cpp > CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.i

CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/editpage.cpp -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.s

CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.o: ../src/GUI/Pages/login.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/login.cpp

CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/login.cpp > CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.i

CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/login.cpp -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.s

CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.o: ../src/GUI/Pages/mainpage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/mainpage.cpp

CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/mainpage.cpp > CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.i

CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/mainpage.cpp -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.s

CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.o: CMakeFiles/PasswordManager.dir/flags.make
CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.o: ../src/GUI/Pages/signup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.o -c /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/signup.cpp

CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/signup.cpp > CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.i

CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/batuhaninan/Documents/Projects/PasswordManager/src/GUI/Pages/signup.cpp -o CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.s

# Object files for target PasswordManager
PasswordManager_OBJECTS = \
"CMakeFiles/PasswordManager.dir/main.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.o" \
"CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.o"

# External object files for target PasswordManager
PasswordManager_EXTERNAL_OBJECTS =

bin/PasswordManager: CMakeFiles/PasswordManager.dir/main.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/DB/Database.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/DB/initDB.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/GUI/initGUI.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/GUI/Pages/editpage.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/GUI/Pages/login.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/GUI/Pages/mainpage.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/src/GUI/Pages/signup.cpp.o
bin/PasswordManager: CMakeFiles/PasswordManager.dir/build.make
bin/PasswordManager: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
bin/PasswordManager: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
bin/PasswordManager: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
bin/PasswordManager: CMakeFiles/PasswordManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable bin/PasswordManager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PasswordManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PasswordManager.dir/build: bin/PasswordManager

.PHONY : CMakeFiles/PasswordManager.dir/build

CMakeFiles/PasswordManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PasswordManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PasswordManager.dir/clean

CMakeFiles/PasswordManager.dir/depend:
	cd /home/batuhaninan/Documents/Projects/PasswordManager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/batuhaninan/Documents/Projects/PasswordManager /home/batuhaninan/Documents/Projects/PasswordManager /home/batuhaninan/Documents/Projects/PasswordManager/build /home/batuhaninan/Documents/Projects/PasswordManager/build /home/batuhaninan/Documents/Projects/PasswordManager/build/CMakeFiles/PasswordManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PasswordManager.dir/depend
