# * =================================================== *
# *  Makefile for the Task 2, Project File Descriptors.	*
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRC	:= main.c print_char.c print.c
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= 2-print_permissions

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
