#include "main.h"
/**
 * *_memset - fil memory with con byte
 * @m: pointer for con
 * @a: con
 * @g: mx byte
 * Return: pointer m
 */
char *_memcpy(char *m, char *a, unsigned int g)
{
unsigned int ed;
for (ed = 0; g > 0; ed++, g--)
{
m[ed] = a;
}
return (m);
}
