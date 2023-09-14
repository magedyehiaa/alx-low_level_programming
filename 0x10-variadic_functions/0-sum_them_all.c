#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all of it megooo
 * @n: co int
 * @...: int to sum
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
int m = 0, a = n
va_list ap;
if (!n)
return (0);
va_start(ap, n);
while (a--)
m += va_arg(ap, int);
va_end(ap);
return (m);
}
