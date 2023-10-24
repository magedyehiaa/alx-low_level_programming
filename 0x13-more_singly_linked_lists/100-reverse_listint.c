#include "lists.h"

/**
 * reverse_listint - revering function
 * @head: header nodes
 *
 * Return: head place
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *node_0 = NULL, *next = NULL;
if (!head || !*head)
return (NULL);
node_0 = *head;
*head = NULL;
while (node_0)
{
next = node_0->next;
node_0->next = *head;
*head = node_0;
node_0 = next;
}
return (*head);
}
