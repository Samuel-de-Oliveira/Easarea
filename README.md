# Easarea - A software to calculate area

This is a software created for learning pruposes, thats mean it's not
a super professional program to use to do perfect things, but you can
install it if you want to test it.

I made this program to learn more about Git, Github, Makefile and C++.
Anyway I'm accepting pull requests or issues from this repository.

## Okay but... How I can install it?
The software only can be compiled by source, then to install the program
you should type (For unix like systems):

	sudo make install

Also, if you only want to compile, you can write:

	make all

To uninstall the software you can write this:

	sudo make uninstall

For while don't have a Windows version of installer, you can compile
and install for yourself in this case.

## How to use?

This software only work by commands, so if you want to do something the
commands syntax works similar to this:

	easarea [command] values ...

For example to calculate the area of a triangle with a base of 10 and
a heigth of 35 you need to supply this inputs and command:

	easarea triangle 10 35

the output should be a simple `175`.

For more commands, type `easarea help` in the terminal.

#### Created by: *Samuel de Oliveira* 2022
