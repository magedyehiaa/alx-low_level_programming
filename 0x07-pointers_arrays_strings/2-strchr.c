#include "main.h"

/**
* *_strchr - looking for string, M E G O O O
* @s: pointer
* @c: con
* Return: to pointer if found null if not.
*/
char *_strchr(char *s, char c)
{
int ed;
for (ed = 0; s[ed] >= '\0' ; ed++)
{
if (s[ed] == c)
	{
	return (s + ed);
	}
}
return ('\0');
}
