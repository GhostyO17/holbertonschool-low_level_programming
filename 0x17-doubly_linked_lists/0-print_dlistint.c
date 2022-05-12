#include "lists.h"

/**
 * print_dlistint - function that creates a file.
 * @
 * @
 * Return: 1 on success, -1 on failure
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
    if (h == NULL)
        return(0);
for (;h != NULL; i++)
{
printf("%d\n", i);
h = h->next;
}
return(i);
}
