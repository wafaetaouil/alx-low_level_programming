#include "lists.h"

/**
 * listint_t *add_nodeint- adds a new  node
 * @head: pointer to the first
 * @n: data to insert
 *
 * Return: num of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	b = malloc(sizeof(listint_t));
	if (!b)
		return (NULL);
	b->n = n;
	b->next = *head;
	*head = b;

	return (b);
}
