# ===---Makefile------------------------------------------------===
#  Cross Project - Alexandre Gautier.
#
# ===---Requirements--------------------------------------------===
#  "Write a program that print a cross on the standard output"
#  * Your program must be compiled and link via a unique Makefile.
#  * Your program must take the size of the cross as a command-line
#  argument
#
#  by Alexandro de Oliveira
# ===-----------------------------------------------------------===

CC	:= gcc
FLAGS	:= -Wall -pedantic -Werror -Wextra -I inc
SRC	:= $(shell find src/ -name '*.c')
OBJS	:= $(SRC:.c=.o)
TARGET	:= bin/cross

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS)
	rm -f *~

re: clean all
