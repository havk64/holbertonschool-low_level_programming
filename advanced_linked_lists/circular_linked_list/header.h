#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "list.h"

void print_string(char *s);
int print_char(char c);
int add_end_cl_list(List **list, char *str);
int add_begin_cl_list(List ** list, char * str);
void free_cl_list(List * list);
void print_cl_list(List *list);
List * array_to_cl_list(char ** array);
