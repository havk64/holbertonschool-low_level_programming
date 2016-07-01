CC      := gcc
CFLAGS  := -Wall -Werror -Wextra -pedantic -I.
SRC     := $(shell find . -name "*.c")
OBJS    := $(SRC:.c=.o)
TARGET  := circular-LL

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS)

re: clean all
