#include "lists.h"

/**
 * delete_nodeint_at_index - inserts nodes in a position gvn
 * @index: deleted index
 * @head: header node
 *
 * Return: 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node_0, *node_1 = malloc(sizeof(listint_t));
unsigned int m = 0;
if (!head || !node_1)
return (-1);
if (!index)
{
node_0 = *head;
*head = (*head)->next;
free(node_0);
return (1);
}
node_0 = *head;
while (node_0)
{
if (m == index)
{
node_1->next = node_0->next;
free(node_0);
return (1);
}
m++;
node_1 = node_0;
node_0 = node_0->next;
}
return (-1);
}
