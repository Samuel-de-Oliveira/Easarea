TARGET = easarea
CXX    = /usr/bin/g++
LD     = /usr/bin/g++
FILE   = main.cpp

.PHONY: all
all: main.cpp
	$(CXX) $(FILE) -o $(TARGET)

.PHONY: install
install: main.cpp
	echo "The installing starts!"
	$(CXX) $(FILE) -o $(TARGET)
	mv -f $(TARGET) /usr/bin/
	echo "Thanks for use my software ;)"

.PHONY: uninstall
uninstall: main.cpp
	echo "Removing software"
	rm -f /usr/bin/easarea

.PHONY: clean
clean:
	rm -f $(TARGET)
