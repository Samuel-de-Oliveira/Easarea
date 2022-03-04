TARGET = easarea
CXX    = /usr/bin/g++
LD     = /usr/bin/g++
FILE   = main.cpp

all: main.cpp
	$(CXX) $(FILE) -o $(TARGET)

install: main.cpp
	echo "The installing starts!"
	$(CXX) $(FILE) -o $(TARGET)
	mv -f $(TARGET) /usr/bin/
	echo "Thanks for use my software ;)"

uninstall: main.cpp
	echo "Removing software"
	rm -f /usr/bin/easarea

clean:
	rm -f $(TARGET)
