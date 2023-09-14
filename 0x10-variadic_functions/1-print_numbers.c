#include "variadic_function.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - printing no
 * @separator: string
 * @n: int megoooz
 * @...: ints to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int m = n;
va_list = ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (m--)
printf("%d%s", va_arg(ap, int), m ? (separator ? separator : "") : "\n");
va_end(ap);
}
