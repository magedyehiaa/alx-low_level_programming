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
	unsigned int m;
	int sum;
	va_list l;

	va_start(list, n);
	for (m = 0, sum = 0; m < n; m++)
		sum += va_arg(l, int);

	va_end(l;
	return (sum);
}
