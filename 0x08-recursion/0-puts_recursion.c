#include "main.h"
/**
 * _puts_recursion - print the string M E G O ....
 * @s: string
 * Return: value
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
