#include "main.h"

/**
 * _strcat - contains 2 string
 * @dest: stringwith conctenation
 * @src: string to be conctenation
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	s = 0;

	while (*(dest + d) != '\0')
		d++;
	while (*(src + s) != '\0' && d < 9)
	{
		*(dest + d) = *(src + s);
		d++;
		s++;
	}
	*(dest + d) = '\0';
	return (dest);
}
