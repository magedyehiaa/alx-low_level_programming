#include "lists.h"

/**
 * free_listint - freening lists
 * @head: the header of nodes
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
listint_t *m;
while (head)
{
m = head;
head = head->next;
free(m);
}
}
