#include "lists.h"

/**
 * add_node_end - last node adding
 * @head: addres of a pointer head
 * @str: faliur
 *
 * Return: size
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *lhead = malloc(sizeof(list_t));
list_t *node = *head;
if (!head || !lhead)
return (NULL);
if (str)
	{
	lhead->str = strdup(str);
	if (!lhead->str)
	{
	free(lhead);
	return (NULL);
	}
	lhead->len = _strlen(lhead->str);
	}
if (node)
{
while (node->next)
node = node->next;
node->next = lhead;
}
else
*head = lhead;
return (lhead);
}
