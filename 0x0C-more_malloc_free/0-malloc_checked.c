#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: num of bytes
 *
 * Return: apointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
