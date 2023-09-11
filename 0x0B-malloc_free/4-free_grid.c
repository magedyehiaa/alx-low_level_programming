#include "main.h"
/**
 * free_grid - return to 2d arr
 * @grid: grid
 * @height: the tall
 * Return: void M E G o0o
 */
void free_grid(int **grid, int height)
{
int m = 0;
for (; m < height; m++)
free(grid[m]);
free(grid);
}
