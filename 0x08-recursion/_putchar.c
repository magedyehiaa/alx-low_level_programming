#include <unistd.h>
#include "main.h"
/**
* _putchar -writes the ch std
* @c: print
*
* Return: on success 1.
* on error, -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
