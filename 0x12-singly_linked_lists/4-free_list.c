#include "lists.h"

/**
 * free_list - free lists for me
 * @head: head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *n, *nn;
if (!head)
return;
n = head;
while (n)
{
nn = n->next;
free(n->str);
free(n);
n = nn;
}
}
