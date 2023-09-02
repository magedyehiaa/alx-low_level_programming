#include "main.h"
/**
 * _print_rev_recursion - print in reverse M E G O ...
 * @s: string
 * Return: value
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_print_rev_recursion(s - 1);
}
}
