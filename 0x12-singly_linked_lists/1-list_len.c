#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - lenth of ll
 * @h: first nod Me H o o Oo
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next
	i++;
}
return (i);
}
