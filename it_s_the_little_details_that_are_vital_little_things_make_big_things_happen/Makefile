# * ===========================================================	*
# *  Project of introduction to Makefile by Alexandre Gautier 	*
# *  This Makefile builds our libholbertonschool.a library.	*
# *  by Alexandro de Oliveira, for Holberton School.		*			 
# * =========================================================== *

CC := gcc
INCLUDE := inc/
CFLAGS := -Wall -pedantic -Werror -Wextra -I$(INCLUDE).
SOURCE := src/
SRC := $(shell find $(SOURCE) -name '*.c')
OBJ := $(patsubst %.c, %.o, $(SRC))

.PHONY: all

all: libholbertonschool.a clean
	@echo " * ============================================================== *"
	@echo " *	*	*	*	*	*	*	*	 *"
	@echo " * Holberton School, the best Software Engineer School EVER ! ! ! *"
	@echo " *	*	*	*	*	*	*	*	 *"
	@echo " * ============================================================== *"
libholbertonschool.a: $(OBJ)
	@echo " * ============================================================== *"
	@echo " * 		   Creating the library.			 *"
	@echo " * ============================================================== *"
	ar -rcs libholbertonschool.a $(OBJ)

$(SOURCE)%.o:$(SOURCE)%.c
	@echo " * ============================================================== *"
	@echo " * 		Compiling the source code.			 *"
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean: 
	@echo " * ============================================================== *"
	@echo " * Removing object files *.o 					 *"
	rm -f src/*.o  #   <<<<  Cleaning things up ! ! ! <<<<<<<<===
re:
	@echo " * ============================================================== *"
	@echo " * 		Applying the "re" rule.				 *"
	@echo " * ============================================================== *"
	make all
