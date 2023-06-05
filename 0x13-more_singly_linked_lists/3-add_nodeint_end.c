#include "lists.h"

/**
 * add_nodeint_end - adds a node
 * @head: pointer to first
 * @n: data to print
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b;
	listint_t *t = *head;

	b = malloc(sizeof(listint_t));
	if (!b)
		return (NULL);

	b->n = n;
	b->next = NULL;

	if (*head == NULL)
	{
		*head = b;
		return (b);
	}
	while (t->next)
		t = t->next;

	t->next = b;

	return (b);
}
