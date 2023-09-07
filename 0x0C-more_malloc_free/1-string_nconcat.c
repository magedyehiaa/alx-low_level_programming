#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concates stranges M E G OoO
 * @s1: p to  1st str
 * @s2: p to 2nd str
 * @n: N of byts
 * Return: space memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *mag;
unsigned int a, b, s1le, s2le;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (s1le = 0; s1[s1le] != '\0'; s1le++)
;
for (s2le = 0; s2[s2le] != '\0'; s2le++)
;
mag = malloc(s1le + n + 1);
if (mag == NULL)
{
return (NULL);
}
for (a = 0; s1[a] != '\0'; a++)
mag[a] = s1[a];
for (b = 0; b < n; b++)
{
mag[a] = s2[b];
a++;
}
mag[a] = '\0';
return (mag);
}
