# * =========================================================== *
# *  Makefile for the Task 1, Project Macro and Structures	*
# *  by Alexandro de Oliveira, for Holberton School.		*
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRC	:= 1-main.c 1-print_string_struct.c 1-string_to_struct.c 3-free_string_struct.c print_char.c
OBJECTS	:= $(SRC:.c=.o)

all: task-1

task-1: $(OBJECTS)
	$(CC) $(OBJECTS) -o task-1

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) task-1

re: $(OBJECTS)