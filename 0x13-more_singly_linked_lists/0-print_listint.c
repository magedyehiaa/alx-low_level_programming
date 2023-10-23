#include "lists.h"

size_t print_listint(const listint_t *h)
{
size_t m = 0;
while (h)
{
printf("%d\n", h->a)
	h = h->next;
	m++;
}
return (m);
}
