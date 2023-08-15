#include "main.h"
/**
 * print_alphabet_x10 - print 10 times megoo
 *
*/
void print_alphabet_x10(void)
{
int m, a;
for (m = 0; m <= 9; m++)
{
for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
_putchar('\n');
}
}
