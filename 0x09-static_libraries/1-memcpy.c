#include "main.h"

/**
 * _memcpy - fucntion that copy memory
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n : number of bytes
 *
 * Return: copied a memory in n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int p = 0;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
