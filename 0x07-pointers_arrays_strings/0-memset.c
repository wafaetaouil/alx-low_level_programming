#include "main.h"

/**
 *_memset - fill a block memory with a specific value
 *@s: starting adress of memory
 *@b: desired value
 *@n: number of bytes
 *
 * Return: changed arrayt wth new n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
