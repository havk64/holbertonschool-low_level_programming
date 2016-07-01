#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "list.h"

int print_char(char);
int add_end_dl_list(List **, char *);
int add_begin_dl_list(List **, char *);
void print_dl_list(List *);
List *array_to_dl_list(char **array);
void print_dl_list(List *list);
void print_string(char *s);
void free_dl_list(List *list);
