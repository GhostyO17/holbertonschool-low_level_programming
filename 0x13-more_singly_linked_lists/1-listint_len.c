#include "lists.h"

/**
 * listint_len - returns the number of elements of a linked list
 * @h: linked list
 *
 * Return: size of linked list
 */

size_t listint_len(const listint_t *h)
{
int i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
