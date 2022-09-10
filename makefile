TARGET = easarea
CXX    = /usr/bin/g++
FILE   = main.cpp

all:
	$(CXX) $(FILE) -o $(TARGET)

install:
	@echo "The installing starts!"
	$(CXX) $(FILE) -o $(TARGET)
	mv $(TARGET) /usr/bin/
	@echo "Thanks for use my software ;)"

uninstall:
	@echo "Removing software"
	rm /usr/bin/easarea

clean:
	rm $(TARGET)
