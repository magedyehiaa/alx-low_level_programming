#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - code check
 * @argc: args
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
char *m = (char *)main;
int a;
if (argc != 2)
printf("Error\n"), exit(1);
a = atoi (aargv[1]);
if (a < 0)
printf("Error\n"), exit(2);
while (a--)
print("%02hhx%s", *m++, a ? " " : "\n");
return (0);
}
