# * =========================================================== *
# *  Makefile for the Task 3, Project Macro and Structures	*
# *  by Alexandro de Oliveira, for Holberton School.		*
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I ../
SRC	:= main.c s2s.c 3-free_string_struct.c print_char.c
OBJECTS	:= $(SRC:.c=.o)

all: task-3

task-3: $(OBJECTS)
	$(CC) $(OBJECTS) -o task-3

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) task-3

re: $(OBJECTS)
