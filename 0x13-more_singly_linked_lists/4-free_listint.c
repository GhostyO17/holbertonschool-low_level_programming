#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees listint_t memory
 * @head: start
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
