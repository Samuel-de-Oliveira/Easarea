TARGET = easarea
CXX    = /usr/bin/g++
LD     = /usr/bin/g++
FILE   = main.cpp

all: main.cpp
	$(CXX) $(FILE) -o $(TARGET)
