#include "lists.h"

/**
 * print_listint- print all the element
 * @h: listint_t to print
 *
 * Return: number of n
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
