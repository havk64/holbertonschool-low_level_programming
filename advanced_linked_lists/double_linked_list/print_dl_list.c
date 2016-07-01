#include "list.h"
#include "header.h"

void print_dl_list(List *list)
{
    while (list != NULL) {
        print_string(list->str);
        print_string("\n\t");
        if (list->prev == NULL) {
            print_string("NULL");
        }
        else {
            print_string(list->prev->str);
        }
        print_string("\n\t");
        if (list->next == NULL) {
            print_string("NULL");
        }
        else {
            print_string(list->next->str);
        }
        print_char('\n');

        list = list->next;
    }
}

void print_string(char *s)
{
    while(*s != '\0') {
        print_char(*s++);
    }
}
