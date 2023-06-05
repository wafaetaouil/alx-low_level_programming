#include "lists.h"

/**
 * sum_listint - calculate le sum
 * @head: first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}
