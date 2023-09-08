#include "main.h"
int _sqrt(int n, int m);
/**
 * _sqrt_recursion - natural square megozos
 * @n: the square root of number
 *
 * Return: number or -1 if no root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - root finding megos
 * @n: num of root
 * @m: the number
 * Return: number or -1 if no root
 */
int _sqrt(int n, int m)
{
int sqrt = m * m;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (m);
return (_sqrt(n, m + 1));
}
