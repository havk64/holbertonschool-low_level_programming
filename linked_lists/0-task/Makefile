# * =========================================================== *
# *  Makefile for the Task 0, Project Linked lists.		*
# *  by Alexandro de Oliveira, for Holberton School.		*
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I ../
SRC	:= main.c 0-add_node.c
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= task-0

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
