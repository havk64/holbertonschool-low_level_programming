# * =========================================================== *
# *  Makefile for the 2-calculator task, by Alexandre Gautier   *
# *  by Alexandro de Oliveira, for Holberton School.            *
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Werror -Wextra -pedantic
SRC	:= $(shell find . -name '*.c') # Create the list of source code files using "find".
OBJECTS	:= $(SRC:.c=.o) # Substitute the source file extension for object extension.

all: 2-calculator 
	@echo BOOOMMMM ! ! !
	@echo Congrats ! ! !

2-calculator: $(OBJECTS) # To create the executable the Objects are required.
	@echo Creating the executable file: $@
	$(CC) $(OBJECTS) -o 2-calculator

$(OBJECTS): $(SRC) # Using GNU-make implicit rules

clean:
	rm -f $(OBJECTS) 2-calculator

re: $(OBJECTS)
