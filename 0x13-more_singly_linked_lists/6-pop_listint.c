#include "lists.h"

/**
 * pop_listint - deleting a node
 * @head: the header node
 *
 * Return: new system of nodes
 *
 */

int pop_listint(listint_t **head)
{
listint_t *new;
int m;
if (!head || !*head)
return (0);
new = (*head)->next;
m = (*head)->m;
free(*head);
*head = new;
return (m);
}
