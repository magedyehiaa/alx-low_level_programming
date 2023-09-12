#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers Meg OoO OooOz
 * @argc: number of
 * @argv: array of pointers
 *
 * Return: Always 0, 1
 */
int main(int argc, char **argv)
{
	int m, r;

	m = 1;
	r = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	while (m < argc)
	{
		r = r * atoi(argv[m]);
		m++;
	}
	printf("%d\n", r);
	return (0);
}
