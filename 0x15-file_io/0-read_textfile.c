#include "main.h"
/**
 * read_textfile - reading files
 *
 * @filename: names
 *
 * @letters: no of byt
 *
 * Return: no of reading byts
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int m;
ssize_t a;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
return (0);
m = open(filename, O_RDONLY);
if (m == -1)
return (0);
a = read(m, &buf[0], letters);
a = write(STDOUT_FILENO, &buf[0], a);
close(m);
return (a);
}
