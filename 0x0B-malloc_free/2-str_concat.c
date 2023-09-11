#include "main.h"
/**
 * _strlen - lenth finding M Eg OooO
 * @s: the string
 * Return: integer
 */
int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}
/**
 * *str_concat - con 2 string M
 * @s1: st1 E
 * @s2: st2 G
 * Return: pointer OoO
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2, m;
char *z;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
z = malloc((size1 + size2) *sizeof(char) + 1);
if (z == 0)
return (0);
for (m = 0; m <= size1 + size2; m++)
{
if (m < size1)
	z[m] = s1[m];
else
	z[m] = s2[m - size1];
}
z[m] = '\0';
return (z);
}
