#include "main.h"
/**
 * array_range - cteate array M E G OoO
 * @min: starting int
 * @max: mx int
 * Return: ar int
 */
int *array_range(int min, int max)
{
int l, i;
int *m;
if (min > max)
return (NULL);
l = max - min + 1;
m = malloc(sizeof(int) * l);
if (!m)
return (NULL);
for (i = 0; i < l; i++)
m[i] = min++;
return (m);
}
