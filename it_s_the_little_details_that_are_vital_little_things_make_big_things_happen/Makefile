# * ===========================================================	*
# *  Project of introduction to Makefile by Alexandre Gautier 	*
# *  This Makefile builds your libholbertonschool.a library.	*
# *  by Alexandro de Oliveira, for Holberton School.		*			 
# * =========================================================== *

CC := gcc
INCLUDE := inc/
CFLAGS := -Wall -pedantic -Werror -Wextra -I$(INCLUDE).
SOURCE := src/
OBJ := 0-absolute.c 0-uppercase_string.c 1-swap_int.c 2-str_len.c 4-positive_or_not.c  5-reverse_array.c 0-contact_strings.c 1-cap_string.c 1-uppercase.c  3-is_prime_number.c  4-reverse_string.c   print_array.c  0-first_digit.c 1-nconcat_strings.c  2-square_root.c 3-print_string.c  4-strings_compare.c  string_to_integer.c 0-lowercase.c 1-power.c 2-string_copy.c  3-string_ncopy.c 5-print_number.c
SRC := $(foreach file, $(OBJ), $(SOURCE)$(file)) 
OBJS := $(patsubst %.c, %.o, $(SRC))

all: libholbertonschool.a clean

libholbertonschool.a: $(OBJS)
	@echo "============="
	@echo Creating the library.
	ar -rcs libholbertonschool.a $(OBJS)

$(SOURCE)%.o:$(SOURCE)%.c
	@echo "============="
	@echo Compiling the source code.
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean: 
	@echo Removing object files *.o
	rm -f src/*.o
re:
	@echo "============="
	@echo Applying the "re" rule.
	make clean
	make all
