# * =================================================== *
# *  Makefile for the Task 0, Project File Descriptors.	*
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRC	:= main.c print_char.c
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= 0-print_content

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
