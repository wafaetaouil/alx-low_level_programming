#include "lists.h"

/**
 * free_listint- free the node
 * @head: to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
