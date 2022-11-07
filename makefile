TARGET      = easarea
CXX         = /usr/bin/g++
FILE        = main.cpp
INSTALL_DIR = /usr/bin/

.PHONY: all install uninstall clean

all:
	$(CXX) $(FILE) -o $(TARGET)

install:
	$(MAKE)
	mv $(TARGET) $(INSTALL_DIR)

uninstall:
	rm $(INSTALL_DIR)/$(TARGET)

clean:
	rm $(TARGET)
