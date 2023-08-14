#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'putchar print alpha bet expect e and q, mego'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
char m = 'a';
while (m <= 'z')
{
if (m == 'e' || m == 'q')
m++;
putchar(m);
m++;
}
putchar('\n');
return (0);
}
