		# * ===========================================================	*
		# *  Project of introduction to Makefile by Alexandre Gautier 	*
		# *  This Makefile builds our libholbertonschool.a library.	*
		# *  by Alexandro de Oliveira, for Holberton School.		*			 
		# * =========================================================== *

CC	:= gcc
INC	:= inc/
CFLAGS	:= -Wall -pedantic -Werror -Wextra -I$(INC).
VPATH	:= src/
SRC	:= $(shell find $(VPATH) -name '*.c')
OBJECTS	:= $(SRC:.c=.o) # Before it was: $(patsubst %.c, %.o, $(SRC) <<<==<

all: libholbertonschool.a
	@echo " * =============================================================== *"
	@echo " *	*	*	*	*	*	*	*	  *"
	@echo " * Holberton School, the best Software Engineer School, EVER ! ! ! *"
	@echo " *	*	*	*	*	*	*	*	  *"
	@echo " * =============================================================== *"
libholbertonschool.a: $(OBJECTS)
	@echo " * =============================================================== *"
	@echo " * 		Creating the library...				  *"
	@ar -rcs libholbertonschool.a $(OBJECTS)
	@echo " * 		BOOOMMMM ! ! !					  *"
	@echo " *		CONGRATS ! ! !					  *"
	@echo " * =============================================================== *"

$(OBJECTS):$(SRC)
	@echo " The compiler $(CC) now is creating the object:  $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@echo " * ============================================================== *"
	@echo " * 		Removing object and backup file			 *"
	@rm -f $(OBJECTS)
	@rm -f *~
	@echo " * 		Directory $(SOURCE) is clean now!		 *"
	@echo " * ============================================================== *"

re: clean all 
	@echo " * ============================================================== *"
	@echo " * 		Applying the "re" rule.				 *"
	@echo " * ============================================================== *"
