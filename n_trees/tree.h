#ifndef _TREE_H_
#define _TREE_H_

struct NTree;

typedef struct List
{
	struct NTree *node;
	struct List *next;
} List;

typedef struct Ntree
{
	char *str;
	List *children;
} NTree;

#endif

