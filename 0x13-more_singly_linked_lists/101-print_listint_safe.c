#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - memory array
 * @list: old nod
 * @size: size new
 * @new: new nod
 *
 * Return: new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t **nlist;
size_t m;

nlist = malloc(size * sizeof(listint_t *));
if (nlist == NULL)
{
free(list);
exit(98);
}
for (m = 0; m < size - 1; m++)
nlist[m] = list[m];
nlist[m] = new;
free(list);
return (nlist);
}
/**
 * print_listint_safe - safly prints
 * @head: header node
 *
 * Return: no of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
size_t m, a = 0;
const listint_t **list = NULL;
while (head != NULL)
{
for (m = 0; m < a; m++)
{
if (head == list[m])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (a);
}
}
a++;
list = _r(list, a, head);
printf("[p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (a);
}
