#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers Me Go OoOz
 * @argc: number
 * @argv: array of pointers
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	int m, a, sum;

	m = 1;
	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (m < argc)
	{
		for (a = 0; argv[m][a] != '\0'; a++)
		{
			if (argv[m][a] < '0' || argv[m][a] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum = sum + atoi(argv[m]);
		m++;
	}
	printf("%d\n", sum);
	return (0);
}
