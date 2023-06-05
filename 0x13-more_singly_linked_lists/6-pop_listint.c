#include "lists.h"

/**
 * pop_listint- deletes the head
 * @head: pointer to the first time
 *
 * Return: the data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int nu;

	if (!head || !*head)
		return (0);

	nu = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (nu);
}
