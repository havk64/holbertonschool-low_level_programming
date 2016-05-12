# * =================================================== *
# *  Makefile for the Task 0, Project ❝Simple Shell❞
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRC	:= main.c print.c print_char.c
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= shellisfun
LIB	:= libshell.a

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIB) -o $(TARGET)

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
