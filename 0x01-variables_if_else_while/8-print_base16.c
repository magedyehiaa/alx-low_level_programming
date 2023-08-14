#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'hecegonallll  a text mego'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
int maged = 48;
while (maged <= 102)
{
putchar(maged);
if (maged == 57)
maged += 39;
maged++;
}
putchar('\n');
return (0);
}
