# * ======================================================== *
# *  Makefile for Stat Project which retrivies information   *
# *  about a file given as parameter and prints it to stdout *
# *  by Alexandro de Oliveira.				     *
# * ======================================================== *
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -pedantic
SRC     := main.c print.c report.c
OBJECTS := $(SRC:.c=.o)
TARGET  := Stat-cat

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

re: $(OBJECTS)

