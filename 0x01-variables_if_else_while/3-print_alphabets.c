#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'putchar pring alphabet L Then H, mego'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
char m = 'a';
char n = 'A';
while (m <= 'z')
{
putchar(m);
m++;
}
while (n <= 'Z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
