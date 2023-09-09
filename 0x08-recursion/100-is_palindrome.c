#include "main.h"
bool isPalRec(char str[], int s, int e);

/**
 * isPalRec - if pal
 * @s: term
 * @e: term 2
 * Return: 1 or 0
 * @str: back
 */
bool isPalRec(char str[], int s, int e)
{
if (s == e)
return (1);
if (str[s] != str[e])
return (0);
if (s < e + 1)
return (isPalRec(str, s + 1, e - 1));
return (1);
}
/**
 * is_palindrome - reversed equal M E G oO o z
 *
 * @s: the char
 *
 * Return: 1 if pal 0 if not
 */
int is_palindrome(char *s)
{
int n = strlen(str);
if (n == 0)
return (1);
return (isPalRec(str, 0, n - 1));
return (1);
}
