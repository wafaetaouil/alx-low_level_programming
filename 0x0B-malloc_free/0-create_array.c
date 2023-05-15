#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array for array  ans sign c
 * @size: size of array
 * @c: char to sign
 * description: creat array of size and asign char c
 * Return: pointer array or  NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
