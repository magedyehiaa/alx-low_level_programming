#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int _putchar(char c);

/**
 * struct funckey - key
 * in 3-print_all.c
 *
 * @f: function
 * @spec: characte
 */
typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;

#endif
