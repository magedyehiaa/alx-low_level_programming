#include "main.h"
/**
 * *_stedup - new allocated M E G oOo
 * @str: string
 * Return: 0
 */
char *_stedup(char *str)
{
int m = 0, size = 0;
char *a;
if (str == NULL)
return (NULL);
for (; str[size] != '\0'; size++)
;
a = malloc(size * sizeof(*str) + 1);
if (a == 0)
return (NULL);
else
{
for (; m < size; m++)
a[m] = str[m];
}
return (a);
}
