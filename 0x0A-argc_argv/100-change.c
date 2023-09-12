#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min no Me Go OoO ZzZ
 * @argc: number
 * @argv: pointers to arg
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c, o;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	c = atoi(argv[1]);
	o = c / 25;
	c %= 25;
	o = o + c / 10;
	c %= 10;
	o = o + c / 5;
	c %= 5;
	o = o + c / 2;
	c %= 2;
	o = o + c;
	printf("%d\n", o);
	return (0);
}
