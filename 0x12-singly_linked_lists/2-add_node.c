#include "lists.h"

/**
 * add_node - head node adding
 * @head: addres of a pointer head
 * @str: faliur
 *
 * Return: size
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nhead = malloc(sizeof(list_t));
if (!head || !nhead)
return (NULL);
if (str)
	{
	nhead->str = strdup(str);
	if (!nhead->str)
	{
	free(nhead);
	return (NULL);
	}
	nhead->len = _strlen(nhead->str);
	}
nhead->next = *head;
*head = nhead;
return (nhead);
}
