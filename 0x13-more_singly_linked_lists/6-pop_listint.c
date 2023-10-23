#include "lists.h"
/**
 * pop_listint - deleting a header node
 * @head: the header
 * Return: new list
 */

int pop_listint(listint_t **head)
{
listint_t *nde;
int m;
 if (*head == NULL)
return (0);

nde = *head
n = (*head)->n
*head = (head)->next;
free(nde);
return (n);
}
