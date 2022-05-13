#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data in the list
 * @head: head element
 * Return: nothing
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
