#include "main.h"
/**
 * print_most_numbers - do not print 2 and 4, M E G O
 *
 * Return: Always 0.
*/
void print_most_numbers(void);
{
int N;
for (N = 0; N <= 9; N++)
{
if (N == 2 || N == 4)
continue;
putchar(N + 48);
}
putchar('\n');
return (0);
}
