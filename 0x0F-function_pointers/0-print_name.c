#include "function_pointers.h"
/**
 * print_name - the fun names Me go Z
 * @name: the result
 * @f: printing fun
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
