    #include <stdio.h>
/**
* main - Entry point
*
* Description: from 1 to 9 using ASCII, megooooooooooooo
* while using loop
*
* Return: Always 0 (Success)
*/
int main(void)
{
int m = 0;
while (m < 10)
{
  /* here is a convertion to ASCII*/
putchar (m + '0');
m++;
}
putchar('\n');
return (0);
}
