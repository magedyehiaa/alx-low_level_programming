#include "main.h"
/**
 * print_numbers - print numbers us _putchar 0 to 9, M E G O
 *
 * Return: Always 0.
*/
void print_numbers(void)
{
int num = 0;
while (num >= 0 && num <= 9)
{
_putchar(num + 48);
num++;
}
_putchar('\n');
}
