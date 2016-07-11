CC	:= gcc
CFLAGS	:= -Wall -Werror -Wextra -pedantic
SRC0	:= bubble_sort.c bubble_main.c print_array.c
OBJ0	:= $(SRC0:.c=.o)

all: task0

task0: $(OBJ0)
	$(CC) $(CFLAGS) $(OBJ0) -o task0
clean:
	rm -f *.o

re: clean all
