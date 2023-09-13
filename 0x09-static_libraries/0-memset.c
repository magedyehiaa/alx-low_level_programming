#include "main.h"

/**
* *_memset - fil memory with con byte
* @s: pointer for con
* @b: con
* @n: mx byte
* Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int ed;
for (ed = 0; n > 0; ed++, n--)
{
s[ed] = b;
}
return (s);
}
