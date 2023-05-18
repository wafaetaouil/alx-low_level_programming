#include "main.h"
#include <stdlib.h>

/**
 * _memset -fills memory
 * @s: memory
 * @b: char to cpy
 * @n: num of byt
 *
 * Return: pointer to amemory
 */
char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s);
}

/**
 * *_calloc - alocate memory
 * @nmemb: number of element
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
