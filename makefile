TARGET = easarea
CXX    = /usr/bin/g++
LD     = /usr/bin/g++
FILE   = main.cpp

all: main.cpp
	$(CXX) $(FILE) -o $(TARGET)

install: main.cpp
	echo "The installing starts!"
	$(CXX) $(FILE) -o $(TARGET)
	mv $(TARGET) /usr/bin/
	echo "Thanks for use my software ;)"
