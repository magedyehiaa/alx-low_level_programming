#include <stdio.h>

/**
 * main - prints all Me Go Zo
 * @argc: numbe
 * @argv: array of pointers
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int m;

	m = 0;
	while (m < argc)
	{
		printf("%s\n", argv[m]);
		m++;
	}
	return (0);
}
