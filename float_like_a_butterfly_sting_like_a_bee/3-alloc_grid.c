#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int i, j;
    int **p2p;
    p2p = malloc( sizeof(int *) * height);
    if(p2p != NULL) {
	for(i = 0; i < height; i++) {
	    p2p[i] = malloc( sizeof(int) * width);
	    if(p2p[i] != NULL) {
		for(j = 0; j < width; j++) {
		    p2p[i][j] = 0;
		}
	    } else {
		return NULL;
	    }
	}
	return p2p;
    }
    return NULL;
}

