#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a specified point
 * @h: head element
 * @idx: insert node at this index
 * @n: int n
 * Return: nothing
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *buff = NULL, *new = NULL;
unsigned int i = 1;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*h)
{
if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}
buff = *h;
while (buff)
{
if (i == idx)
{
new->next = buff->next;
buff->next = new;
new->prev = buff;
if (new->next != NULL)
(new->next)->prev = new;
return (new);
}
buff = buff->next;
i++;
}
return (NULL);
}
*h = new;
return (new);
}
