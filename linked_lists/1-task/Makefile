# * =================================================== *
# *  Makefile for the Task 1, Project Linked lists.	*
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I ../
SRC	:= main.c 8-add_node2.c
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= task-1

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
