#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: address by Maged
 * Return: size
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t m = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
m++;
}
return (m);
}
