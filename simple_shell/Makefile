# * =================================================== *
# *  Makefile for the Task 0, Project ❝Simple Shell❞
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I inc
SRC	:= $(wildcard src/*.c)
OBJECTS	:= $(patsubst src/%, build/%, $(SRC:.c=.o))
TARGET	:= bin/shellisfun
LIB	:= lib/libshell.a

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIB) -o $(TARGET)

build/%.o : src/%.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
