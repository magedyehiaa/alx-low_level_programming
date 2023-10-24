#include "lists.h"

/**
 * insert_nodeint_at_index - inserts nodes in a position gvn
 * @idx: index place
 * @head: header node
 * @n: node value
 * Return: inserted nod plaxe
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node_0, *node_1 = malloc(sizeof(listint_t));
unsigned int m = 0;
if (!head || !node_1)
return (NULL);

node_1->n = n;
node_1->next = NULL;
if (!idx)
{
node_1->next = *head;
*head = node_1;
return (node_1);
}
node_0 = *head;
while (node_0)
{
if (m == idx - 1)
	{
	node_1->next = node_0->next;
	node_0->next = node_1;
	return (node_1);
	}
m++;
node_0 = node_0->next;
}
free(node_1);
return (NULL);
}
