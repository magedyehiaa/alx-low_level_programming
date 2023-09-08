#include "main.h"
/**
 * _sqrt_recursion - natural square megozos
 * @n: number
 * @maged: the root
 * Return: number0
 */
int square(int n, int maged);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - root finding megos
 * @n: num
 * @maged: root
 * Return: number
 */
int square(int n, int maged)
{
if (maged + maged == n)
return (maged);
else if (maged * maged < n)
return (square(n, maged + 1));
else if
	return (-1);
}
