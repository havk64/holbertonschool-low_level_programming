CC	:= gcc
CFLAGS	:= -Wall -Werror -Wextra -pedantic
SRC0	:= bubble_sort.c bubble_main.c print_array.c
OBJ0	:= $(SRC0:.c=.o)
SRC1	:= insertion_sort.c insertion_main.c print_array.c
OBJ1	:= $(SRC1:.c=.o)


all: task0 task1

task0: $(OBJ0)
	$(CC) $(CFLAGS) $(OBJ0) -o task0

task1: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) -o task1

clean:
	rm -f *.o

re: clean all
