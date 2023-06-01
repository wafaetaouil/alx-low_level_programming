#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the num
 * @h: pointer to the list
 *
 * Return: num of element h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
