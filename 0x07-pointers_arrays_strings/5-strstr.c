#include "main.h"
/**
 * _strstr -  function finds the first occurrence of the substring M E G O0
 * @needle: substring input
 * @haystack: string input
 * Return: if sub found go to begaining if not null
 *
*/

char *_strstr(char *haystack, char *needle)
{
char haystack;
char needle;
for(; haystack != '\0'; haystack++)
{

while (haystack == needle && needle != '\0')
{
haystack++;
needle++;
}
if (needle == '\0')
return (haystack);
}
 return (NULL);
}
