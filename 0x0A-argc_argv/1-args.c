#include <stdio.h>
/**
 * main - names print
 * @argc: no of arg megooooooz
 * @argv: argu values
 * Return: 0
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	int m;
	m = 0;
	while (argc--)
		m++;
	printf("%d\n", m - 1);
	return (0);
}
