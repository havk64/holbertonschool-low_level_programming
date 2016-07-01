#include "header.h"

void print_cl_list(List *list)
{
    List * cursor;
    cursor = list;

    if (list == NULL) return;

    do {
	print_string(cursor->str);
	print_string("\n\t");
	print_string(cursor->next->str);
	print_char('\n');
	cursor = cursor->next;
    } while(cursor != list);
}

void print_string(char *s)
{
    while(*s != '\0') {
        print_char(*s++);
    }
}
