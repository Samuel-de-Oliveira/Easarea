TARGET = easarea
CXX    = /usr/bin/g++
FILE   = main.cpp
BIN    = /usr/bin/

.PHONY: all install uninstall clean

all:
	$(CXX) $(FILE) -o $(TARGET)

install:
	$(MAKE)
	mv $(TARGET) $(BIN)

uninstall:
	rm $(BIN)/$(TARGET)

clean:
	rm $(TARGET)
