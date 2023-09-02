#include "main.h"
/**
 * _strlen_recursion - lengh 2yas MEGOGG
 *
 * @s: pinter for length
 *
 * Return: ma
 */
int _strlen_recursion(char *s)
{
int ma = 0;

if (*s > '\0')
{
ma += _strlen_recursion(s + 1) + 1;
}
return (ma);
}
