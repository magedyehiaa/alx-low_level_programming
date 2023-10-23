#include "lists.h"
/**
 * pop_listint - deleting a header node
 * @head: the header
 * Return: new list
 */

int pop_listint(listint_t (**head))
{
listint_t *nde;
int m = 0;
if (!*head)
return (0);

nde = (*head)->next;
m = (*head)->a
free(*head);
*head = nde;
return (nde);
}
