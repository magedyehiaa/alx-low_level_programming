#include "lists.h"

/**
 * free_listint2 - fring the lists
 * @head: the header addres
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
listint_t *m;
listint_t *a;
if (!head)
return;
m = *head;
while (m)
{
a = m;
m = m->next;
free(a);
}
*head = NULL;
}
