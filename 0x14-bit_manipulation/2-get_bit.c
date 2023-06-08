#include "main.h"

/**
 * get_bit- return a bit
 * @n: number of bit
 * @index: to bit
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
