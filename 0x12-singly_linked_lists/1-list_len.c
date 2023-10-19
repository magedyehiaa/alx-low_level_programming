#include "lists.h"
/**
 * list_len - lenth of ll
 * @h: first nod Me H o o Oo
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
size_t m = 0;
while (h)
{
h = h->next
	m++;
}
return (m);
}
