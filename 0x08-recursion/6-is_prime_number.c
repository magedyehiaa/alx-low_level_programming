#include "main.h"
/**
 * is_prime_number - find the prim
 * @n: number
 * Return: 1 if prime 0 if other
 */
int is_prime_number(int n)
{
if (n > 0)
{
if ( n == 1)
return (1);
else if (n % n == 0)
return (1);
else
return (0);
}
return (0);
	}