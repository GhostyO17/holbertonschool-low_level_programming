#include "lists.h"

/**
 * add_dnodeint_end - adds a new node a the end of the list
 * @head: head element
 * @n: int n
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *buff = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (buff->next != NULL)
{
buff = buff->next;
}
buff->next = new;
new->prev = buff;
return (new);
}
