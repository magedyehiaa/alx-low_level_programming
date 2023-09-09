#include "main.h"
/**
 * last_index - return Me G oOo
 * @s: pointer
 * Return: integed
 */
int is_palindrome(char *s);
int check(char *s, int begain, int ending, int mod);
int last_index(char *s)
{
int i = 0;
if (*s > '\0')
i += last_index(s + 1) + 1;
return (i);
}
/**
 * is_palindrome - is it pal MeG oOoz
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
int ending = last_index(s);
return (check(s, 0, ending - 1, ending % 2));
}
/**
 * check - the checker mego
 * @s: string
 * @begain: form r to l
 * @ending: from l to r
 * @mod: integer
 * Return: 0 or 1
 */
int check(char *s, int begain, int ending, int mod)
{
if ((begain == ending && mod != 0) || (begain == ending + 1 && mod == 0))
return (1);
else if (s[begain] != s[ending])
return (0);
else
return (check(s, begain + 1, ending - 1, mod));
}
