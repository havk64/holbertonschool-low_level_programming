#ifndef _LIST_H_
#define _LIST_H_

typedef struct List {
    char *str;
    struct List *next;
} List;

#endif
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void print(char s[]);
int print_char(int);
void print_list(List *list);
void free_list(List *list);
int add_node(List **list, char *str);
int list_size(List *list);
