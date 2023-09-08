#include "main.h"
/**
 * _isdigit - check digit M e GoO
 * @m: checked char GoDaO
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int m)
{
	return (m >= '0' && m <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multipl
 * @s1: first
 * @s2: secon
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, m, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			m += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = m % 10;

			m /= 10;
		}
		if (m)
			r[l1 + l2 + 1] += m;
	}
	return (r);
}


/**
 * main - multiply
 * @argc: arguments
 * @argv: vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, m, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	m = 0;
	a = 0;
	while (m < x)
	{
		if (r[m])
			a = 1;
		if (a)
			_putchar(r[m] + '0');
		m++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
