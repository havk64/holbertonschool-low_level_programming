CC	:= gcc
CFLAGS	:= -Wall -Wextra - Werror -pedantic
SRC	:= $(shell find src/ -name "*.c")
OBJS	:= $(SRC:.c=.o)
TARGET	:= /bin/hashtable

all: $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS)

re: clean all


