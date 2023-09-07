#include "main.h"
/**
 * *_realloc - allo using mallo and free MeGoo
 * @ptr: pointer
 * @old_size: size in by old
 * @new_size: size in by new
 * Return: Null or not null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}
return (m);
}
if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((cahr *)p + i) = *((char *)ptr + i);
free(ptr);
}
return (p);
}
