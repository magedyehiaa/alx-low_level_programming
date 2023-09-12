#include <stdio.h>
/**
 * main - names print fun
 * @argc: no of arg megooooooz
 * @argv: argu values
 * Return: 0
 */
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
