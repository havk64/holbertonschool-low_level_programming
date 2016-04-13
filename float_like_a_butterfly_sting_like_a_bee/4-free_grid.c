#include <stdlib.h>
/*  ======================================== *
 *  This function frees a 2 dimensional grid.*
 *  ======================================== */
void free_grid(int **grid, int height)
{
    int i = 0;
    while(i < height) {
	free(grid[i]);
	i++;
    }
    free(grid);
}
