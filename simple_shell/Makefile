# * =========================================================== *
# *  Makefile for Project ❝Simple Shell❞ without std libraries	*
# *  by Alexandro de Oliveira, for Holberton School.		*
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I inc
OBJDIR	:= build/
SRCDIR	:= src/
SRC	:= $(wildcard $(SRCDIR)*.c)
OBJECTS	:= $(patsubst $(SRCDIR)%, $(OBJDIR)%, $(SRC:.c=.o))
TARGET	:= bin/shellisfun
LIB	:= lib/libshell.a

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIB) -o $@

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
