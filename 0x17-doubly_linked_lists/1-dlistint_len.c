#include "lists.h"
/**
 * dlistint_len - lengh mego
 * @h: head node
 * Return: size
 */
size_t size_t dlistint_len(const dlistint_t *h)
{
size_t m = 0;
while (h)
{
h = h->next;
m++;
}
return (m);
}
