#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'how to use if else, mego'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is postive\n", n);
if else(n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative", n);
return (0);
}
