#include "main.h"
/**
 * **alloc_grid - return to 2d arr
 * @width: the width
 * @height: the tall
 * Return: 2d arr M E G o0o
 */
int **alloc_grid(int width, int height)
{
int **m, a, g;
m = malloc(sizeof(*m) * hight);
if (width <= 0 || height <= 0 || m == 0)
{
return (NULL);
}
else
{
for (a = 0; a < height; a++)
	{
m[a] = malloc(sizeof(**m) * width);
	if (m[a] == 0)
	{
	while (a--)
		free(m[a]);
	free(m);
	return (NULL);
	}
	for (g = 0; g < width; g++)
	m[a][g] = 0;
	}
}
return (m);
}
