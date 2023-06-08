#include "main.h"

/**
 * set_bit- sets a bit
 * @n: pointer to num
 * @index: index of bit
 *
 * Return: 1 for success, -1 for failue
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
