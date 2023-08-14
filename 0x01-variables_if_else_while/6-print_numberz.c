    #include <stdio.h>
    /**
      * main - Entry point
      *
      * Description: 'print from 0 to 9 without print of asci , mego'
      *
      * Return: Always 0 (Success)
      */
int main(void)
{
int m = 0;
while (m < 10)
{
putchar (m + '0');
m++;
}
putchar('\n');
return (0);
}
