#include "lists.h"
/**
 * _strlen - return Meg OoOOoO
 * @m: string
 * Return: int
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
 * print_list - linked list megoo
 * @h: to first nod
 * Return: size
 */
size_t print_list(const list_t *h)
{
size_t a = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
	a++;
}
return (a);
}
