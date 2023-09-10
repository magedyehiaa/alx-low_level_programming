#include "main.h"
/**
 * *create_array - array making
 * @size: array size
 * @c: initilized char
 * Return: pointer if initilized or NULL
 *
 */
char *create_array(unsigned int size, char c)
{
cahr *m = malloc(size);
if (size == 0 || m == 0)
return (0);
while (size--)
n[size] = c;
return (m);
}
