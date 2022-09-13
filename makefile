TARGET = easarea
CXX    = /usr/bin/g++
FILE   = main.cpp

all:
	$(CXX) $(FILE) -o $(TARGET)

install:
	$(CXX) $(FILE) -o $(TARGET)
	mv $(TARGET) /usr/bin/

uninstall:
	rm /usr/bin/easarea

clean:
	rm $(TARGET)
