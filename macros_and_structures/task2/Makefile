# * =========================================================== *
# *  Makefile for the Task 2, Project Macro and Structures	*
# *  by Alexandro de Oliveira, for Holberton School.		*
# * =========================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic -I ../
SRC	:= main.c 2-print_string_struct.c s2s.c free.c print_char.c
OBJECTS	:= $(SRC:.c=.o)

all: task-2

task-2: $(OBJECTS)
	$(CC) $(OBJECTS) -o task-2

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) task-2

re: $(OBJECTS)
