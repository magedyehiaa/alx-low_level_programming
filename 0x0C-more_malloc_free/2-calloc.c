#include "main.h"
/**
 * *_memset - fil memory with con by M E G OoO
 * @s: pointer
 * @b: con
 * @h: mx by
 * Return: s
 *
 */
void *_memset(char *s, char b, unsigned int n)
{
char *m = s;
while (n--)
*s++ = b;
return (m);
}
/**
 * *_calloc - allocate memo for arr MeGoOo
 * @nmemb: array
 * @size: size MEme
 * Return: point
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *a;
if (size == 0 || nmemb == 0)
return (NULL);
a = malloc(sizeof(int) * nmemb);
if (a == 0)
return (NULL);
_memset(a, 0, sizeof(int) * nmemb);
return (a);
}
