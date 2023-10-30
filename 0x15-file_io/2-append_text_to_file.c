#include "main.h"

/**
 * _strlen - lenth of fun
 * @m: string
 * Return: lenght
 */
int _strlen(char *m)
{
int a = 0;
if (!m)
return (0);
while (*m++)
a++;
return (a);
}

/**
 * append_text_to_file - append file
 * @filename: name of created file
 * @text_content: the content text
 * Return: 1 - 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int ma;
ssize_t mag = 0, l = _strlen(text_content);
if (!filename)
return (-1);
ma = open(filename, O_WRONLY | O_APPEND);
if (ma == -1)
return (-1);
if (l)
mag = write(ma, text_content, l);
close(ma);
return (mag == l ? 1 : -1);
}
