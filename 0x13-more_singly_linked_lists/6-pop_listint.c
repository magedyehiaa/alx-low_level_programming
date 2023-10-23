#include "lists.h"
/**
 * pop_listint - deleting a header node
 * @head: the header
 * Return: new list
 */

int pop_listint(listint_t (**head))
{
listint_t *nde;
int n = 0;
if (!*head)
return (0);

nde = (*head)->next;
n = (*head)->n
free(*head);
*head = nde;
return (n);
}
