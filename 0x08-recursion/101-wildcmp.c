#include "main.h"
/**
 * move_past_star - iterates M G OoOsz
 * @s2: 2nd str
 * Return: pointer
 */
char *move_past_star(char *s2)
{
if (*s2 == '*')
return (move_past_star(s2 + 1));
else
return (s2);
}
/**
 * inception - m real M E G O0o0z
 * @s1: 1st
 * @s2: 2nd
 * Return: 1 or 0
 */
int inception(char *s1, char *s2)
{
int ma = 0;
if (*s1 == 0)
return (0);
if (*s1 == *s2)
ma += wildcmp(s1 + 1, s2 + 1);
ma += inception(s1 + 1, s2);
return (ma);
}
/**
 * wildcmp - compare
 * @s1: 1st
 * @s2: 2nd
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
int ma = 0;
if (!*s1 && *s2 == '*' && !*move_past_star(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
}
if (!*s1 || !s2)
return (0);
if (*s2 == '*')
{
s2 = move_past_star(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
ma += wildcmp(s1 + 1, s2 + 1);
ma += inception(s1, s2);
return (!!ma);
}
return (0);
}
