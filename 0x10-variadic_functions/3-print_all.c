#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - 2 parameter
 * @format: char
 * Description: print anything Me Go O.oo
 * Return: na
 */
void print_all(const char * const format, ...)
{
	int m;
	char *str;
	char *space;
	va_list ap;

	va_start(ap, format);
	m = 0;
	while (format && format[m])
	{
		space = "";
		if (format[m + 1])
			space = ", ";
		switch (format[m])
		{

		case 'c':
			printf("%c%s", va_arg(ap, int), space);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), space);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, space);
			break;
		}
		m++;
	}
	printf("\n");
}
