# * =========================================================== *
# *  Makefile for the Task 0, Linked lists.			*
# *  by Alexandro de Oliveira, for Holberton School.		*
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I ../
SRC	:= main.c 0-add_node.c
OBJECTS	:= $(SRC:.c=.o)

all: task-0

task-0: $(OBJECTS)
	$(CC) $(OBJECTS) -o task-0

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) task-0

re: $(OBJECTS)
