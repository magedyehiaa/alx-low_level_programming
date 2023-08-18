#include "main.h"

/**
 * print_line - find new line and print linesM E G O
 * @n: number of _ printed
 * Return: Always 0.
 */
void print_line(int n)
{
int s;
if (n <= 0)
_putchar('\n');
else
{
for (s = 1; s <= n; s++)
_putchar('_');
_putchar('\n');
}
}
