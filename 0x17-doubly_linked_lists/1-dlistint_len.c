#include "lists.h"

/**
 * dlistint_len - returns the number of nodes
 * @h: elements that belong to dlistint
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
if (h == NULL)
return (0);
for (; h != NULL; i++)
{
h = h->next;
}
return (i);
}
