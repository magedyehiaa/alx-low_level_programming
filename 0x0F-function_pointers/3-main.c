#include "3-calc.h"

/**
 * main - checker
 * @argc: no of args
 * @argv: arguments for the func
 * Return: 0
 */

int main(int argc, char **argv)
{
int (*fun)(int, int), m, a;
if (argc != 4)
printf("Error\n"), exit(98);
m = atoi(argv[1]);
a = atoi(argv[3]);
fun = get_op_func(argv[2]);
if (!fun)
printf("Error\n"), exit(99);
if (!a && (argv[2][0] == '/' || argv[2][0] == '%'))
printf("Error\n"), exit(100);
printf("%d\n", fun(m, a));
return (0);
}
