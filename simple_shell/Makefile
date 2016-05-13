# * =================================================== *
# *  Makefile for the Task 0, Project ❝Simple Shell❞
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRC	:= main.c print.c strings.c print_char.c
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= shellisfun
LIB	:= libshell.a

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIB) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
