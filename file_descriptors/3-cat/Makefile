# * =================================================== *
# *  Makefile for the Task 3, Project File Descriptors.	*
# *  by Alexandro de Oliveira, for Holberton School.	*
# * =================================================== *
CC	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRC	:= main.c 
OBJECTS	:= $(SRC:.c=.o)
TARGET	:= 3-cat

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)
