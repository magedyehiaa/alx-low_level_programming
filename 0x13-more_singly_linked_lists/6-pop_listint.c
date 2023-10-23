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
listint_t *node;
int m;
if (!head || !*head)
return (0);
node = (*head)->next;
m = (*head)->m;
free(*head);
*head = node;
return (m);
}
