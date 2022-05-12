#include "lists.h"

/**
 * print_dlistint - prints all the nodes of the list
 * @h: elements that belong to dlistint
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
if (h == NULL)
return (0);
for (; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
