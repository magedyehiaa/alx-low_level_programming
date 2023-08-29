#include "main.h"
#include <stdio.h>
/**
 * *_strstr -  function finds the first occurrence of the substring M E G O0
 * @needle: substring input
 * @haystack: string input
 * Return: if sub found go to begaining if not null
 *
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *m = haystack;
char *a = needle;
while (m == *a && *a != '\0')
{
m++;
a++;
}
if (*a == '\0')
return (haystack);
}
return (NULL);
}
