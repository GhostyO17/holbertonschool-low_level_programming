#include "lists.h"

/**
 * add_dnodeint - adds a new node a the head of the list 
 * @head: head element
 * @n: int n
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
(*head)->prev = new;
new->next = *head;
*head = new;
return (new);
}
}
