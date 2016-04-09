CC	:= gcc
CFLAGS	:= -Wall -Werror -Wextra -pedantic
SRC	:= $(shell find . -name '*.c')
OBJECT	:= $(SRC:.c=.o)

all: 2-calculator 
	@echo Done ! ! !
	@echo Congrats ! ! !

2-calculator: $(OBJECT)
	$(CC) $(OBJECT) -o 2-calculator
	@echo Creating the executable file: $@

$(OBJECT): $(SRC)

clean:
	rm -f $(OBJECT)

re: $(OBJECT)
