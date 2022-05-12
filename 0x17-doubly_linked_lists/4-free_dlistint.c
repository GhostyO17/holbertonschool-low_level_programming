#include "lists.h"

/**
 * free_dlistint - frees a list from dlistint
 * @head: head element
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *free_list;
while (head)
{
free_list = head;
head = free_list->next;
free(free_list);
}
}
