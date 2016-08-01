#include "tree.h"
#include <stdlib.h>
#include <string.h>

int btree_insert(BTree **tree, char *data)
{
	BTree *node;
	if (node == NULL || data == NULL) return 1;
	if (*tree == NULL) {
		node = malloc(sizeof(Btree));
		node->str = strdup(data);
		node->right = NULL;
		node->left = NULL;
		*tree = node;
	}
	return (0);
}
