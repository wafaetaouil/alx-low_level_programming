#include "main.h"

/**
 * _strcat - contains 2 string
 * @dest: stringwith conctenation
 * @src: string to be conctenation
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int d, i;

	d = 0;

	while (dest[d])
		d++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[d] = src[i];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
