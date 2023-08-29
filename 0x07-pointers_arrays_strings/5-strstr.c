#include "main.h"
/**
 * print_chessboard - printing the board M E G O 0 o 0
 *
 * @a: for rows
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
int maged, mafdy;
for (maged = 0; maged < 8; maged++)
{
for (mafdy = 0; mafdy < 8; mafdy++)
{
_putchar(a[maged][mafdy]);
}
_putchar('\n');
}
}
