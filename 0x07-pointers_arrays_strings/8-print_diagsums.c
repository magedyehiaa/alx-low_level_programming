#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum two diagonals of a square matrix of integers M E G o
 *
 * @a: array 2 of in
 * @size: array sizes
 *
 */
void print_diagsums(int *a, int size)
{
int ed, m1 = 0, m2 = 0;
for (ed = 0; ed < size; ed++)
{
m1 += a[ed];
m2 += a[size - ed - 1];
a += size;
}
printf("%d, ", m1);
printf("%d\n", m2);
}
