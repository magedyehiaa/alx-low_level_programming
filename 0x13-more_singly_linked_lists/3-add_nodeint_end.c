#include "lists.h"

/**
 * add_nodeint_end - cread an ender nod
 * @head: the header node
 * @n: new node value
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_ *no;
if (!head || !new)
return (NULL);
new->next = NULL;
new->n = n;
if (!*head)
*head = new;
else
{
no = *head;
while (no->next)
no = no->next;
}
return (new);
}
